#include<stdio.h>
int main(void){

    int igrade = 0;
    int istudent = 0;
    int ipass = 0;
    int ifail = 0;
    float ftotal = 0;
    float faverage = 0;

    printf("Enter grade (-1 to end): ");
    scanf("%d", &igrade);

    while(igrade != -1){
        if(igrade > 0 && igrade <= 100){
            istudent++;
            ftotal += igrade;
            if(igrade >= 60){
                printf("Pass\n");
                ipass++;
            }
            else{
                printf("Fail\n");
                ifail++;
            }
        }
        else if(igrade < 0 || igrade > 100){
            printf("Grade must be in 0-100\n");
        }
        printf("Enter grade (-1 to end): ");
        scanf("%d", &igrade);
    }
    faverage = ftotal / istudent;
    printf("Total of all grades: %.2f\n", ftotal);
    printf("Class average: %.2f\n", faverage);
    printf("Total students: %d\n", istudent);
    printf("Pass: %d\n", ipass);
    printf("Fail: %d\n", ifail);
    return 0;
}