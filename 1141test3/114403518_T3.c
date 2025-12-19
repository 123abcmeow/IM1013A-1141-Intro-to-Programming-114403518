#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ring_traverse(int N, int A[][N], int top, int left, int bottom, int right);
void flatten_2d_to_1d(int N, int M[][N], int B[]);
void sort_ascending(int n, int B[n]);
void find_max_resourse_block(int N, int map[][N]);

int main(void){
    int ioption = 0;
    int iok = 0;
    int iN = 0;

    srand(time(0));

    while(ioption != -1){
        //menu part
        printf(" ==== Menu ==== \n");
        printf("1) Option 1 - Ring traversal if a square Matrix\n");
        printf("2) Option 2 - Flatten and sort\n");
        printf("3) Option 3 - Maximun resourse block finder\n");
        printf("(-1) end program\n");
        printf("Select:");
        iok = scanf("%d", &ioption);
        //check input
        while((ioption != -1 && (ioption < 1 || ioption > 3)) || iok != 1){
            while(getchar() != '\n');//clear cache
            printf("Invalid Option! Please Select Again:");
            iok = scanf("%d", &ioption);
        }//end check input

        //switch menu
        switch(ioption){
            case 1:{
                printf("\nEnter the size of matrix(1-5):");
                scanf("%d", &iN);
                if(iN < 1 || iN > 5){
                    printf("Invalid input!\n");
                    break;
                }//return to main

                int itop = 0;
                int ibottom = iN - 1;
                int ileft = 0;
                int iright = iN - 1;

                int iarray[iN*iN];
                int i2Darray[iN][iN];
                ring_traverse(iN, i2Darray, itop, ibottom, ileft, iright);
                break;
            }//end case 1 

            case 2:{
                printf("\nEnter the size of matrix(1-5):");
                scanf("%d", &iN);
                if(iN < 1 || iN > 5){
                    printf("Invalid input!\n");
                    break;
                }//return to main

                int Max[iN][iN];
                int iB[iN*iN];

                printf("\n[Matrix M(%d * %d)]\n", iN, iN);
                for(int i = 0; i < iN; i++){
                    for(int j = 0; j < iN; j++){
                        Max[i][j] = rand()%100;
                        printf("%d ", Max[i][j]);
                    }
                    puts("");
                }

                flatten_2d_to_1d(iN, Max, iB);
                sort_ascending(iN*iN, iB);

                break;
            }//end case 2 

            case 3:{
                printf("\nEnter the size of matrix(3-10):");
                scanf("%d", &iN);
                if(iN < 3 || iN > 10){
                    printf("Invalid input!\n");
                    break;
                }//return to main

                int iM[iN][iN];
                printf("\nMatrix M(%d * %d)\n", iN, iN);
                for(int i = 0; i < iN; i++){
                    for(int j = 0; j < iN; j++){
                        iM[i][j] = rand()%10;
                        printf("%d ", iM[i][j]);
                    }
                    puts("");
                }
                find_max_resourse_block(iN, iM);
                break;
            }//end case 3

            case -1:
            printf("Program end.\n");
            break;
        }//end switch
    }//end while ioption != -1

}//end main

void ring_traverse(int N, int A[][N], int top, int left, int bottom, int right){
    printf("\n[Matrix A]\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            A[i][j] = rand()%10;
            printf("%d ", A[i][j]);
        }
        puts("");
    }
    printf("\n[Ring traverse output]\n");


}//end ring_traverse

void flatten_2d_to_1d(int N, int M[][N], int B[]){
    printf("\n[Flatten id array in row-major order]\n");
    int co = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            B[co] = M[i][j];
            printf("%d ", B[co]);
            co++;
        }
    }
    puts("");
}//end flat fumc

void sort_ascending(int n, int B[n]){
    //bubble sortt
    int itemp = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(B[j] >  B[j+1]){
                itemp = B[j + 1];
                B[j + 1] = B[j];
                B[j] = itemp;
            }
        }
    }//end bobo

    printf("\n[Sorted id array B(ascending)]\n");
    for(int i = 0; i < n; i++){
        printf("%d ", B[i]);
    }
    puts("");
}//end sort acsnf=ewe func

void find_max_resourse_block(int N, int map[][N]){
    int x = 0;
    int y = 0;
    int add = 0;
    int co = 0;
    int array[(N-2)*(N-2)];

    //just add and something
    for(int h = 0; h < (N-2); h++){//for x++ y = 0
        for(int k = 0; k < (N-2); k++){// for y++
            for(int i = x; i < x + 3; i++){
                for(int j = y; j < y + 3; j++){
                    add += map[i][j];
                }
            }
            array[co] = add;
            printf("%d ", array[co]);
            add = 0;
            y++;
            co++;
        }
        y = 0;
        x++;
    }   

    //find biggest
    int max = array[0];
    int posi = 0;
    for(int i = 1; i < (N-2)*(N-2); i++){
        if(array[i] > max){
            max = array[i];
            posi = i;
        }
    }//end find for

    printf("\nMaximum resourse sum : %d\n", max);
    printf("Top left coordination:(%d, %d\n)",posi/N , posi%N);

}//end find max funnn