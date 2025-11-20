#include <stdio.h>
#include <math.h>
int down(int);
int main(void){
    int x = -2;
    float result;
    int num = 1;
    float result2;
    printf("Enter a non-negative integer:");
    scanf("%d",&num);
    while(num<0){
        printf("Invalid input! Enter a non-negative integer:");
        scanf("%d",&num);
    }
    num = num*2;
    int s = -1;
    for(int i=0; i<num; i+=2){
        result = pow(x,i)/down(i)*s;
        s *= -1;
        result2 -= result;
        printf("f(x) = %f\n",result2);
    }
}//end main
int down(int q){
    if(q==0){
        return 1;
    }
    else{
        return q*down(q-1);
    }
}