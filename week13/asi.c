#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//function prototype
void seperate_even_odd(int n, int a[], int even[], int odd[], int counts[]);
int upper_traingle(int n, int matirx[][n]);

int main(void){
    //set variable
    int ioption;
    int iok = 0;
    int isize;
    int imatrix_size;

    srand(time(NULL));//make random by time

    while(ioption != -1){

        //menu
        printf(" ===MENU=== \n");
        printf("1) option 1 - Split into even and odd number array.\n");
        printf("2) option 2 - Culculate sum of elements in  the upper traingle.\n");
        printf("(-1) to end program.\n");
        printf("Enter your option:");

        //check if option is number or not
        iok = scanf("%d", &ioption);
        while(iok != 1 ||( ioption != 1 && ioption != 2 && ioption != -1)){
            while (getchar() != '\n');//clear cache
            printf("Invalid option, please enter again:");
            iok = scanf("%d", &ioption);
        }
        switch(ioption){
            case 1:{//because of the declaration of array lenth in case 1, I need -->"{}".
                printf("\n ---Option 1--- \n");
                printf("Enter array size(1-20):");
                iok = scanf("%d",&isize);

                //check size
                while(iok != 1 || isize > 20 || isize < 1){
                    while (getchar() != '\n');
                    printf("Invalid size, enter again(1-20):");
                    iok = scanf("%d", &isize);
                }

                //setting array
                int iarray[isize];
                int ieven[isize];
                int iodd[isize];
                int icounts[isize];

                //printing original array
                printf("Original array:\n");
                for(int i=0; i<isize; i++){
                    iarray[i] = rand()%11;
                    printf("%d ",iarray[i]);
                }//end making iarray
                puts("");
                seperate_even_odd(isize, iarray, ieven, iodd, icounts);
                break;
            }
            case 2:{//using "{}",the same reason as case 1
                printf("\n ---Option 2--- \n");
                printf("Enter matrix size N(1-5):");
                iok = scanf("%d", &imatrix_size);
                while(iok != 1 || imatrix_size > 5 || imatrix_size < 1){
                    while (getchar() != '\n');
                    printf("Invalid option, enter again:");
                    iok = scanf("%d", &imatrix_size);
                }
                int mx[imatrix_size][imatrix_size];
                printf("Original 2D triangle(%d x %d):\n", imatrix_size, imatrix_size);
                for(int i = 0; i<imatrix_size; i++){
                    for(int j = 0; j<imatrix_size; j++){
                        mx[i][j] = rand()%51;
                        printf("%2d ", mx[i][j]);
                    }
                    puts("");
                }
                printf("\nTotal sum of upper traingle elements is:%d\n", upper_traingle(imatrix_size, mx));
                break;
            }
            case -1:{
                printf("end program.\n");
                break;
            }
            default:
                printf("Invalid input!");
        }//end switch
    }//end while


}//end main

//define seperate function
void seperate_even_odd(int n, int a[], int even[], int odd[], int counts[]){
    
    //let counts[] to record even and odd numbers lenth
    counts[0] = 0;
    counts[1] = 0;

    //check if the number is even or not, and add the counts[]
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            even[counts[0]] = a[i];
            counts[0]++;
        }
        else{
            odd[counts[1]] = a[i];
            counts[1]++;
        }
    }//end counts and make arrays

    //prints total number and array
    printf("\nTotal even number:%d\n", counts[0]);
    printf("Even number:");
    for(int i = 0; i<counts[0]; i++){
        printf("%d ", even[i]);
    }
    printf("\n\nTotal odd number:%d\n", counts[1]);
    printf("Odd number:");
    for(int i = 0; i<counts[1]; i++){
        printf("%d ", odd[i]);
    }
    puts("\n");
}//end seperate function

int upper_traingle(int n, int matirx[][n]){
    int sum = 0;
    int k = 0;//set a k to make it easier to culculate
    for(int i = 0; i<n; i++){
        for(int j = k; j<n; j++){
            sum += matirx[i][j];
        }
        k++;
    }
    return sum;
}