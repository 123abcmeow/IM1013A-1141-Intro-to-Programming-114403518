#include<stdio.h>
int main(void){

    int row_size, col_size;
    printf("Enter row size: ");
    scanf("%d", &row_size);
    printf("Enter column size: ");
    scanf("%d", &col_size);
    
    for(int row=0; row<row_size; row++){
        for(int col=0; col<col_size; col++){
            printf("* ");
        }
        printf("\n");
    }
}