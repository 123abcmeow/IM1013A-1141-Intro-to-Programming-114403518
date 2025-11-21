#include <stdio.h>
int convertToBinary(int);
int get_symbol(int, int, int);
int main(void){
    int ioption;
    int isize;
    int ideci;
    int qua;
    int isdigit;
    while(ioption != -1){
        printf(" ==== Menu ==== \n");
        printf("1) Option 1 - Increase Number Triangle Pattern\n");
        printf("2) Option 2 - Decimal to Binary using recursion\n");
        printf("3) Option 3 - Printing a four-Quadrant Pattern\n");
        printf("(-1) end program\n");
        printf("Select:");
        isdigit = scanf("%d", &ioption);
        while((ioption != -1 && (ioption < 1 || ioption > 3)) || isdigit != 1){
            while(getchar() != '\n');
            printf("Invalid Option! Please Select Again:");
            isdigit = scanf("%d", &ioption);
        }
        switch(ioption){
            case 1:
                printf("\n ---- Option 1 ---- \n");
                int x=1;
                printf("Enter the size of the triangle(1-20):");
                isdigit = scanf("%d", &isize);
                while(isize < 1 || isize > 20 || isdigit != 1){
                    while(getchar() != '\n');
                    printf("Invalid size! Enter the size of the triangle(1-20):");
                    isdigit = scanf("%d", &isize);
                }
                puts("");
                for(int i = 1; i <= isize; i++){
                    for(int j = 1; j <= i; j++){
                        printf("%d ", x);
                        x++;
                    }
                    puts("");
                }
                puts("");
                break;
            case 2:
                printf("\n ---- Option 2 ---- \n");
                printf("Enter a decimal number:");
                isdigit = scanf("%d", &ideci);
                while(ideci < 0 || isdigit != 1){
                    while(getchar() != '\n');
                    printf("Invalid number! Enter a decimal number:");
                    isdigit = scanf("%d", &ideci);
                }
                printf("The binary number is: %d\n", convertToBinary(ideci));
                puts("");
                break;
            case 3:
                printf("\n ---- Option 3 ---- \n");
                printf("Enter the size of each quadrant(1-5):");
                isdigit = scanf("%d", &qua);
                while(qua < 1 || qua > 5 || isdigit != 1){
                    while(getchar() != '\n');
                    printf("Invalid size! Enter the size of each quadrant(1-5):");
                    isdigit = scanf("%d", &qua);
                }
                puts("");
                int r = qua * 2 + 1;
                int c = qua * 2 + 1;
                get_symbol(r, c, qua);
                puts("");
                break;
            case -1:
                printf("End Program\n");
                break;
            default:
                printf("Invalid Option!\n");
        }
    }
}//end main
int convertToBinary(int num){
    if(num == 0){
            return 0;
    }
    else{
        return (num % 2) + 10 * convertToBinary(num / 2);
    }
}//end convertToBinary
int get_symbol(int row, int col, int N){
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            if(i<N && j<N){
                printf("@");
            }
            else if(i<N && j>N){
                printf("#");
            }
            else if(i>N && j<N){
                printf("%%");
            }
            else if(i>N && j>N){
                printf("&");
            }
            else if(j==N && i!=N){
                printf("|");
            }
            else if(i==N && j!=N){
                printf("-");
            }
            else{
                printf("+");
            }
        }
        puts("");
    }
}//end get_symbol