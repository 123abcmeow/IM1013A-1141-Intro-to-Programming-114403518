#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void InitializeArray(int size, int array[size]);
void PrintArray(int size, int array[size]);
int main(void){
    int iArray[SIZE] ={0};
    InitializeArray(SIZE, iArray);
    PrintArray(SIZE, iArray);


}//end main
void InitializeArray(int size, int array[size]){
    srand(time(NULL));
    for(int i = 0; i<size; i++){
        array[i] = rand()%10 + 1;
    }//end for
}//end Initialize
void PrintArray(int size, int array[size]){
    printf("iArray = {");
    for(int i = 0; i<size-1 ; i++){
        printf("%d,", array[i]);
    }
    printf("%d}",array[size-1]);
}