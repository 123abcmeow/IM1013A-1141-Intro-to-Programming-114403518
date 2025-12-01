#include<stdio.h>
int power(int, int);
int main(void){
    int a, b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("a ** b = %d\n",power(a,b));
}//enddd amin
int power(int x, int y){
    if (y == 0){
        return 1;
    }
    else{
        return x*power(x, y-1);
    }
}