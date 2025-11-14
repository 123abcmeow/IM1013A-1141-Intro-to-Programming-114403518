#include <stdio.h>
#include <math.h>
int main(void){
    int descend(int);
    int number, result;
    
    printf("Enter a number between 1 to 9:");
    scanf("%d", &number);
    while(number < 1 || number > 9){
        printf("Invalid number! Enter a number between 1 to 9:");
        scanf("%d", &number);
    }
    result = descend(number);
    printf("The descending number is: %d\n", result);
    
}//end main
int descend(int num){
    if(num == 1){
        return num;
    }
    else{
        return num*pow(10, num-1) + descend(num-1);
    }
}