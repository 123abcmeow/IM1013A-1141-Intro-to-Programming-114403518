#include <stdio.h>
int main(void){
    int add(int);
    int number, result;
    printf("Enter a number:");
    scanf("%d", &number);

    result = add(number);
    printf("The sum of the digits is: %d\n", result);
}//end main

int add(int num){
    if(num < 10 && num > 0){
        return num;
    }
    else{
        return num%10 + add(num/10);
    }
}