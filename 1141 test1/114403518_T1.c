#include <stdio.h>
int main(void){
    int ioption = 0;
    int iadult = 0;
    int istudent = 0;
    int itotal = 0;
    int 200x = 0;
    int 150x = 0;
    int isum = 0;
    int ismult5 = 0;

    printf("1) Option 1 - Single-Order Quatation");
    printf("2) Option 2 - Group Total & Installments");
    printf("(-1) End Program\n");
    printf("Select:");
    scanf("%d",&ioption);

    while(ioption != -1){
        while(ioption != -1 || ioption != 1 || ioption != 2){
            printf("Unknown Selection, Please Enter 1, 2, or -1 to Exit:\n");
            scanf("%d",&ioption);
        }
        if(ioption == 1){
            printf("[option 1] Enter number of adults(1-20):");
            scanf("%d",&iadult);
            printf("[option 1] Enter number of students:(1-20)");
            scanf("%d",&istudent);
            itotal = iadult + istudent;
            while(itotal < 1 || itotal > 20){
                printf("Total number of people must be between 1 and 20:\n");
                printf("[option 1] Enter number of adults(1-20):");
                scanf("%d",&iadult);
                printf("[option 1] Enter number of students(1-20):");
                scanf("%d",&istudent);
                itotal = iadult + istudent;
            }
            isum = iadult * 200 + istudent * 150;

            printf("Adults:%d, Students:%d, Total Tickets:%d\n",iadult,istudent,itotal);
            printf("Base Total: %d\n",isum);

            if(itotal >= 1 && itotal <= 5){
                printf("Quantity Discount Factor:No\n");
            }
            else if(itotal >= 6 && itotal <= 10){
                printf("Quantity Discount Factor:0.95\n");
                isum = isum * 0.95;
            }
            else if(itotal >= 11 && itotal <= 15){
                printf("Quantity Discount Factor:0.9\n");
                isum = isum * 0.9;
            }
            else if(itotal >= 16 && itotal <= 20){
                printf("Quantity Discount Factor:0.85\n");
                isum = isum * 0.85;
            }
            if(itotal % 5 == 0){
                isum = isum * 0.95;
                printf("Multiple-of-5 Discount Applied:Yes\n");
                printf("Final Payable Amount:%d\n",isum);
            }
            else{
                printf("Multiple of 5 Discount Applied:No\n");
                printf("Final Payable Amount:%d\n",isum);
            }
        }
    }       

}//end