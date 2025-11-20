#include <stdio.h>

int main(void){
    int ioption = 0;
    int iadult = 0;
    int istudent = 0;
    int itotal = 0;
    float fprincipal = 0;
    float fsum = 0;

    printf("\n==== Future City Expo Ticket Systems ====\n");
    printf("1) Option 1 - Single-Order Quotation\n");
    printf("2) Option 2 - Group Total & Installments\n");
    printf("(-1) End Program\n");
    printf("Select:");
    scanf("%d",&ioption);

    if(ioption == -1){
        printf("Program ended.\n");
        return 0;
    }

    while(ioption != -1){

        while(ioption > 2 || ioption < 1){
            printf("Unknown Selection, Please Enter 1, 2, or -1 to Exit:\n");
            scanf("%d",&ioption);

            if(ioption == -1){
                printf("Program ended.\n");
                return 0;
            }
        }

        // =====================
        // OPTION 1
        // =====================
        if(ioption == 1){
            printf("[Option 1] Enter number of adults (1-20): ");
            scanf("%d",&iadult);

            if(iadult == -1){
                printf("Program ended.\n");
                break;
            }

            printf("[Option 1] Enter number of students (1-20): ");
            scanf("%d",&istudent);

            if(istudent == -1){
                printf("Program ended.\n");
                break;
            }

            itotal = iadult + istudent;

            while(itotal < 1 || itotal > 20){
                printf("Total number of people must be between 1 and 20:\n");

                printf("[Option 1] Enter number of adults (1-20): ");
                scanf("%d",&iadult);

                printf("[Option 1] Enter number of students (1-20): ");
                scanf("%d",&istudent);

                itotal = iadult + istudent;
            }

            fsum = (float)iadult * 200 + (float)istudent * 150;

            printf("\n--- Quotation Summary ---\n");
            printf("Adults: %d, Students: %d, Total Tickets: %d\n", iadult, istudent, itotal);
            printf("Base Total: %.2f\n", fsum);

            if(itotal >= 1 && itotal <= 5){
                printf("Quantity Discount Factor: No\n");
            }
            else if(itotal <= 10){
                printf("Quantity Discount Factor: 0.95\n");
                fsum *= 0.95;
            }
            else if(itotal <= 15){
                printf("Quantity Discount Factor: 0.9\n");
                fsum *= 0.9;
            }
            else{
                printf("Quantity Discount Factor: 0.85\n");
                fsum *= 0.85;
            }

            if(itotal % 5 == 0){
                fsum *= 0.95;
                printf("Multiple-of-5 Discount Applied: Yes (0.95)\n");
            }
            else{
                printf("Multiple-of-5 Discount Applied: No\n");
            }

            printf("Final Payable Amount: %.2f\n", fsum);
        }

        // =====================
        // OPTION 2
        // =====================
        if(ioption == 2){

            printf("[Option 2] Enter principal (positive) or -1 to end: ");
            scanf("%f",&fprincipal);

            if(fprincipal == -1){
                printf("Program ended.\n");
                break;
            }

            while(fprincipal <= 0){
                printf("Principal must be positive.\n");
                printf("[Option 2] Enter principal (positive): ");
                scanf("%f",&fprincipal);
            }

            printf("\n--- Installment Plan Summary ---\n");
            printf("Principal: %.2f\n", fprincipal);

            float repay = fprincipal;

            if(fprincipal < 500){
                printf("Number of periods: 1\n");
                printf("Handling Fee per period: 0\n");
                printf("Interest Rate per period: 0.00%%\n");

                printf("Repayment (Compound on principal): %.2f\n", repay);
                printf("Total Handling Fee: 0\n");
                printf("Total Repayment: %.2f\n", repay);
                printf("Payment per Installment: %.2f\n", repay);
            }
            else if(fprincipal <= 1000){
                printf("Number of periods: 3\n");
                printf("Handling Fee per period: 20\n");
                printf("Interest Rate per period: 3.00%%\n");

                repay *= 1.03 * 1.03 * 1.03;
                printf("Repayment (Compound on principal): %.2f\n", repay);

                printf("Total Handling Fee: 60\n");
                repay += 60;

                printf("Total Repayment: %.2f\n", repay);
                printf("Payment per Installment: %.2f\n", repay / 3);
            }
            else if(fprincipal <= 2000){
                printf("Number of periods: 6\n");
                printf("Handling Fee per period: 17\n");
                printf("Interest Rate per period: 2.50%%\n");

                for(int i=0;i<6;i++)
                    repay *= 1.025;

                printf("Repayment (Compound on principal): %.2f\n", repay);
                printf("Total Handling Fee: 102\n");

                repay += 102;
                printf("Total Repayment: %.2f\n", repay);
                printf("Payment per Installment: %.2f\n", repay / 6);
            }
            else{
                printf("Number of periods: 12\n");
                printf("Handling Fee per period: 12\n");
                printf("Interest Rate per period: 1.50%%\n");

                for(int i=0;i<12;i++)
                    repay *= 1.015;

                printf("Repayment (Compound on principal): %.2f\n", repay);
                printf("Total Handling Fee: 144\n");

                repay += 144;
                printf("Total Repayment: %.2f\n", repay);

                printf("Payment per Installment: %.2f\n", repay / 12);
            }
        }

        printf("\nSelect next option (1/2, -1 to exit): ");
        scanf("%d",&ioption);
    }

    return 0;
}
