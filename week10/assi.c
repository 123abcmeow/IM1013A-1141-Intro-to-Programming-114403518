#include<stdio.h>
int main(void){
    int ioption = 0;
    int inumber = 0;
    int ireverse = 0;
    int A, B, C, D, E;
    char zero[5] = "";

    //menu
    do{
        printf(" ====Menu==== \n");
        printf("1) Option 1 - Times table\n");
        printf("2) Option 2 - Reverse the number\n");
        printf("(-1) to exit program\n");
        printf("Select an option:");
        scanf("%d",&ioption);

        //option
        switch(ioption){
            case 1:{
                //times table
                printf("\n ----Times Table---- \n");
                for(int a=1; a<=9; a++){
                    for(int b=1; b<=9; b++){
                        printf("%2d x%2d= %2d ",a,b,a*b);
                    }
                    puts("");
                }
                puts("");
                break;
            }
            case 2:{
                //reverseee
                printf("Enter a number between 1 to 10000:");
                scanf("%d",&inumber);

                while(inumber < 1 || inumber > 10000){
                    printf("Invalid number! Enter a number between 1 to 10000:");
                    scanf("%d",&inumber);
                }
                A = inumber / 10000;
                B = (inumber % 10000) / 1000;
                C = (inumber % 1000) / 100;
                D = (inumber % 100) / 10;
                E = inumber % 10;
                //Using a dumb way to add zeros= =
                for(int oooooo=0; oooooo<6; oooooo++){
                    zero[oooooo] = '\0';
                }
                if(E==0 && D==0 && C==0 && B==0){
                    zero[0] = '0';
                    zero[1] = '0';
                    zero[2] = '0';
                    zero[3] = '0';
                }
                else if(E==0 && D==0 && C==0){
                    zero[0] = '0';
                    zero[1] = '0';
                    zero[2] = '0';
                }
                else if(E==0 && D==0){
                    zero[0] = '0';
                    zero[1] = '0';
                }
                else if(E==0){
                    zero[0] = '0';
                }
                if(A==0 && B==0 && C==0 && D==0){
                    ireverse = E;
                }
                else if(A==0 && B==0 && C==0){
                    ireverse = E*10 + D;
                }
                else if(A==0 && B==0){
                    ireverse = E*100 + D*10 + C;
                    }
                else if(A==0){
                    ireverse = E*1000 + D*100 + C*10 + B;
                }
                else{
                    ireverse = E*10000 + D*1000 + C*100 + B*10 + A;
                }
                
                printf("\n----Reversal Result---- \n");
                printf("Original number N:%d\n",inumber);
                printf("Reversed number R:%s%d\n\n",zero,ireverse);
                break;
            }
            case -1:{
                printf("Program terminated.\n");
                break;
            }
            default:{
                printf("Invalid option!\n");
                break;
            }
        }//end switch
    }while(ioption != -1);

}//end main