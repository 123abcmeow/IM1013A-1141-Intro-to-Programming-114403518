#include<stdio.h>
int main(void){
    int ioption = 0;
    int iok = 0;

    while(ioption != -1){
        //menu part
        printf(" ==== Menu ==== \n");
        printf("1) Option 1 - \n");
        printf("2) Option 2 - \n");
        printf("3) Option 3 - \n");
        printf("(-1) end program\n");
        printf("Select:");
        iok = scanf("%d", &ioption);
        //check input
        while((ioption != -1 && (ioption < 1 || ioption > 3)) || iok != 1){
            while(getchar() != '\n');//clear cache
            printf("Invalid Option! Please Select Again:");
            iok = scanf("%d", &ioption);
        }//end check input

        //switch menu
        switch(ioption){
            case 1:
            printf("cool\n");
            break;

            case -1:
            printf("Program end.\n");
            break;
        }//end switch
    }//end while ioption != -1

}//end main