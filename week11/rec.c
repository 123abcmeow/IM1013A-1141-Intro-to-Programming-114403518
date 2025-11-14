#include <stdio.h>
#include <math.h>
int main(void){
    int descend(int);
    int number = 8;
    int result = descend(number);
    printf("The descending number is: %d\n", result);
}//end main
int descend(int num){
    if(num = 1){
        return num;
    }
    else{
        return num*pow(10, num-1) + descend(num-1);
    }
}