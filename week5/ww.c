#include <stdio.h>
int main(void){
    unsigned int A = 0;
    float B , R , S = 0;
    unsigned int C , Y = 0;

    printf("Enter Principal:");
    scanf("%u",&A);
    printf("Enter Rate:");
    scanf("%f",&R);
    printf("Enter Year:");
    scanf("%u",&Y);
    printf("%4s%22s","Year |", "Amount on deposit\n");
    printf("-----|----------------------\n");
    B = R/100 + 1 ;
    S += A;

    for(C = 1 ; C <= Y ; C++){
        S = S * B;
        printf("%4u |%20.2f\n",C,S);
    }

}//end main