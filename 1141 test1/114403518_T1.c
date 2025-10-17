#include <stdio.h>
int main(void){
    int ioption = 0;
    int iadult = 0;
    int istudent = 0;
    int itotal = 0;

    printf("1) Option 1 - Single-Order Quatation");
    printf("2) Option 2 - Group Total & Installments");
    printf("(-1) End Program\n");
    printf("Select:");
    scanf("%d",&ioption);

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
        printf("Adults: %d ; Students: %d ; Total Tickets: %d\n",iadult,istudent,itotal);
    }

}//end