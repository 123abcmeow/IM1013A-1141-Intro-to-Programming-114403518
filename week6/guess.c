#include <stdio.h>
int main(void){

    int inumber = 0;
    int iguess = 0;
    int ipassword = 0;
    int a , b , c , d , i , q , w , e , r , iA , iB;
    printf("Enter a 4 digits number(1000-9999) to generate a password.:");
    scanf("%d",&inumber);
    while(inumber < 1000 || inumber > 9999){
        printf("Number must be 4 digits!!!:");
        scanf("%d",&inumber);
    }
    ipassword = ((inumber * 3 + 1357) % 10000);
    a = ipassword / 1000;
    b = ipassword / 100 % 10;
    c = ipassword / 10 % 10;
    d = ipassword % 10;
    while(a == b || a == c || a == d || b == c || b == d || c == d){
        ipassword = ((ipassword + 1234) % 10000);
        a = ipassword / 1000;
        b = ipassword / 100 % 10;
        c = ipassword / 10 % 10;
        d = ipassword % 10;
    }
    for(i = 0 ; i < 10 ; i++){
        printf("Enter your 4 digit number to guess the password:");
        scanf("%d",&iguess);
        while(iguess < 1000 || iguess > 9999){
            printf("Number must be 4 digits!!!\n");
        }
        q = iguess / 1000;
        if
    }

}//end