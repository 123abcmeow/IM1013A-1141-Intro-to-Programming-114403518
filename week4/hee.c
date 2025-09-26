#include<stdio.h>
int main(void){

    int icounter = -1;
    int itotal = 0;
    int igrade = 0;
    int ipass = 0 , ifail = 0;
    float average = 0;

    while(igrade != -1){
        printf("Enter grade or enter -1 to exit:");
        scanf("%d",&igrade);
        if(igrade > 100 || igrade < -1){
            printf("That's impossible= =\n");
            continue;
        }
        else if(igrade <= 100 || igrade >= 0){
            itotal += igrade;
            icounter += 1;
            if(igrade >= 60){
                printf("Pass\n");
                ipass += 1;
            }
            else if(igrade < 60 || igrade >= 0 || igrade != -1){
                printf("Fail\n");
                ifail += 1;
                continue;
            }
        }
    }
    if(icounter != 0){
        average =  (float)itotal/icounter;
        printf("********************************\nPass:%d\nFail:%d\n",ipass,ifail);
        printf("Students:%d\n",icounter);
        printf("Total Grade:%d\n",itotal);
        printf("Average:%.2f\n",average);
    }
    else{
        printf("No grades were entered");
    }

}//end