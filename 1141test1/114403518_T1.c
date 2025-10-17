#include <stdio.h>
int main(void){
    int ioption = 0;
    int iadult = 0;
    int istudent = 0;
    int itotal = 0;
    float fsum = 0;
    int ismult5 = 0;

    printf("\n==== Future City Expo Ticket Systems ====\n");
    printf("1) Option 1 - Single-Order Quatation\n");
    printf("2) Option 2 - Group Total & Installments\n");
    printf("(-1) End Program\n");
    printf("Select:");
    scanf("%d",&ioption);
    if(ioption == -1){
        printf("Program ended.\n");
    }

    while(ioption != -1){
        while(ioption >2 || ioption < 1){
            printf("Unknown Selection, Please Enter 1, 2, or -1 to Exit:\n");
            scanf("%d",&ioption);
        }
        if(ioption == 1){
            printf("[option 1] Enter number of adults(1-20):");
            scanf("%d",&iadult);
            if(iadult == -1){
                printf("Program ended.\n");
                break;
            }
            printf("[option 1] Enter number of students:(1-20):");
            scanf("%d",&istudent);
            if(istudent == -1){
                printf("Program ended.\n");
                break;
            }
            itotal = iadult + istudent;
            while(itotal < 1 || itotal > 20){
                printf("Total number of people must be between 1 and 20:\n");
                printf("[option 1] Enter number of adults(1-20):");
                scanf("%d",&iadult);
                printf("[option 1] Enter number of students(1-20):");
                scanf("%d",&istudent);
                itotal = iadult + istudent;
            }
            fsum = (float)iadult * 200 + (float)istudent * 150;

            printf("\n--- Quatatioon Summary ---\n");
            printf("Adults:%d, Students:%d, Total Tickets:%d\n",iadult,istudent,itotal);
            printf("Base Total: %2.f\n",fsum);

            if(itotal >= 1 && itotal <= 5){
                printf("Quantity Discount Factor:No\n");
            }
            else if(itotal >= 6 && itotal <= 10){
                printf("Quantity Discount Factor:0.95\n");
                fsum = fsum * 0.95;
            }
            else if(itotal >= 11 && itotal <= 15){
                printf("Quantity Discount Factor:0.9\n");
                fsum = fsum * 0.9;
            }
            else if(itotal >= 16 && itotal <= 20){
                printf("Quantity Discount Factor:0.85\n");
                fsum = fsum * 0.85;
            }
            if(itotal % 5 == 0){
                fsum = fsum * 0.95;
                printf("Multiple-of-5 Discount Applied:Yes (Factor 0.95)\n");
                printf("Final Payable Amount:%2.f\n",fsum);
            }
            else{
                printf("Multiple of 5 Discount Applied:No\n");
                printf("Final Payable Amount:%2.f\n",fsum);
            }
        }
        if(ioption == 2){
            printf("[option 2] Enter");
        }
    }       

}//end