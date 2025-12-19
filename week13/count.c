#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SIZE 6
void counts(int ary[]);

int main(void){
    int iarray[SIZE];
    int a = 2;
    int b = 5;
    printf("%.2f\n", pow(a, b));
    srand(time(0));
    for(int i = 0; i<SIZE; i++){
        iarray[i] = rand()%5 + 1;
        printf("%d ", iarray[i]);
    }
    puts("");
    counts(iarray);


}//end main
void counts(int ary[SIZE]){
    int array[5] = {1,2,3,4,5};
    int count[5] = {0,0,0,0,0};
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < SIZE; j++){
            if(ary[j] == array[i]){
                count[i]++;
            }
        }
        printf("Number %d occurs %d times\n", i+1, count[i]);

    }
    for(int i = 0; i < 5; i++){

    }
}