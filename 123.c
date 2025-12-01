#include <stdio.h>
int MM(int);
int main(void){
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    MM(x);
}
    
int MM(int a){
    int p = a;
    for(int i = 1; i<=a*2; i=i+2){
        for(int k = 1; k<p; k++){
            printf(" ");
        }
        p--;
        for(int j = 0; j<i; j++){
            printf("*");
        }
        puts("");
    }
}