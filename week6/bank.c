#include <stdio.h>
int main(void){
    
    int ibalance = 10000;
    int iwithdraw = -1;
    int ipassword = 0;
    int ienter = 0;
    printf("Balance setting:10000\n");
    printf("Current Balance: %d\n",ibalance);

    //加了設密碼
    printf("Enter your 4-digit password:");
    scanf("%d",&ipassword);
    while(ipassword < 1000 || ipassword > 9999){
        printf("Password must be 4-digit!!!:");
        scanf("%d",&ipassword);
    }
    
    while(iwithdraw != 0){
        printf("Enter Withdraw Amount(or 0 to exit):");
        scanf("%d",&iwithdraw);
        if(iwithdraw < 0){
            printf("Invalid Amount\n");
        }
        else if(iwithdraw % 100 != 0){
            printf("Withdrawal amount must be a multiple of 100\n");
        }
        else if(iwithdraw > ibalance){
            printf("Insufficient Balance\n");
        }
        else if(iwithdraw % 100 == 0 && iwithdraw != 0){
            while(ienter != ipassword){
                printf("Enter Password(4-digit):");
                scanf("%d",&ienter);
                if(ienter != ipassword){
                    printf("Wrong Password\n");
                }
                else if(ienter == ipassword){
                    ibalance -= iwithdraw;
                    printf("Withdraw Amount: %d\n",iwithdraw);
                    printf("Current Balance: %d\n",ibalance);
                    ienter = 0;
                    break;
                }
            }
        }
    }
    if(iwithdraw == 0){
        printf("transaction ended.\n");
    }

}//end