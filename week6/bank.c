#include <stdio.h>
int main(void){
    
    int ibalance = 10000;
    int iwithdraw = 0;
    printf("Balance setting:10000\n");
    printf("Current Balance: %d\n",ibalance);
    
    while(ibalance > 0){
        printf("Enter Withdraw Amount(or 0 to exit):");
        scanf("%d",&iwithdraw);
        if(iwithdraw % 100 != 0){
            printf("Withdrawal amount must be a multiple of 100\n");
        }
        else if(iwithdraw > ibalance){
            printf("Insufficient Balance\n");
        }
        else if(iwithdraw <= ibalance && iwithdraw % 100 == 0){
            ibalance -= iwithdraw;
            printf("Withdraw Amount: %d\n",iwithdraw);
            printf("Current Balance: %d\n",ibalance);
        }
        else if (iwithdraw == 0){
            printf("Exit\n");
            break;
        }
    }

}