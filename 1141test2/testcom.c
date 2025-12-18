#include<stdio.h>

int gcd(int, int);
void get_symbol(int, int, int);

int main(void){
    int ioption = -1;
    int iok;
    int idiamond;
    int inum_diamond = 0;
    int ix, iy;
    int irow = 0;
    int icol = 0;
    int iN = 0;
    
    while(ioption != 0){
    //main menu
    printf("\n ===Main Menu=== \n");
    printf("1) Option 1 - Diamond pattern with numbers\n");
    printf("2) Option 2 - GCD using recursion\n");
    printf("3) Option 3 - Printing a Four-Quadrant pattern\n");
    printf("(0) To end program.\n");
    printf("Select:");
    iok = scanf("%d",&ioption);

    //check input
    while(iok != 1 || (ioption != 1 && ioption != 2 && ioption != 3 && ioption != 0)){
        while(getchar() != '\n');//clear cache
        printf("Invalid Input!\n");
        printf("Select:");
        iok = scanf("%d",&ioption);
    }//end check while

    switch(ioption){
        case 1:
        while(idiamond != -1){
            printf("Please enter the size of diamond(1-10 odd number and larger or equal to 3):");
            iok = scanf("%d",&idiamond);
            while(iok != 1 ||( idiamond > 9 || idiamond < 3 && idiamond != -1)|| idiamond % 2 == 0){
                while(getchar() != '\n');//clear cache
                printf("Invalid Input!\n");
                printf("Please enter the size of diamond(1-10 odd number and larger or equal to 3):");
                iok = scanf("%d",&idiamond);
            }//end check while
            
            if(idiamond == -1){
                printf("\nReturn to main menu.\n");
                break;
            }
            
            puts("");
            for(int i = 0; i<idiamond/2 + 1; i++){
                inum_diamond ++;
                for(int k = idiamond/2; k>i; k--){
                    printf(" ");
                }
                for(int j = 0; j<i*2 + 1; j++){
                    printf("%d", inum_diamond);
                }
                puts("");
            }//end upper triangle
            
            inum_diamond -= 1;
            for(int i = 0; i<(idiamond - 1)/2; i++){
                for(int k = 0; k<i + 1; k++){
                    printf(" ");
                }
                for(int j = idiamond / 2 * 2 - 2; j>i*2 - 1; j--){
                    printf("%d", inum_diamond);
                }
                puts("");
                inum_diamond--;
            }
        }
            break;
        
        case 2:
        while(ix != -1 || iy != -1){
        printf("Please enter two positive integer:");
        iok = scanf("%d %d", &ix, &iy);
        while(iok != 2 || (ix < 1 && ix != -1) || ix > 1000 || (iy < 1 && iy != -1) || iy > 1000){
            while(getchar() != '\n');//clear cache
            printf("Invalid Input!\n");
            printf("Please enter two positive integer:");
            iok = scanf("%d %d", &ix, &iy);
        }//end check
        
        if(ix == -1 || iy == -1){
            printf("\nReturn to main menu.\n");
            break;
        }
        
        printf("The GCD is :%d", gcd(ix, iy));
        }
        break;
        
        case 3:
        while(iN != -1){
            printf("Please enter size of each Quadrant:");
            iok = scanf("%d", &iN);
            while(iok != 1 || iN>5 || (iN<1 && iN != -1)){
                while(getchar() != '\n');//clear cache
                printf("Invalid Input!\n");
                printf("Please enter two positive integer:");
                iok = scanf("%d", &iN);
            }
            if(iN == -1){
                printf("\nReturn to main menu.\n");
                break;
            }
            get_symbol(icol, irow, iN);
        }
        break;
        
    }//end switch
    
    }//end ioption != 0 while



}//end main

int gcd(int n1, int n2){
    if(n2 == 0){
        return n1;
    }
    else{
        return gcd(n2, n1%n2);
    }
}//end GCD

void get_symbol(int row, int col, int n){
    
    //make an array to not to print over 9
    int iarray[9];
    for(int i = 0; i<9; i++){
        iarray[i] = i+1;
    }
    
    int x = 0;//to count number from 1 to 9
    for(row = 0; row<n*2+1; row++){
        for(col = 0; col<n*2+1; col++){
            if(row == n && col == n){
                printf("+");
            }
            else if(row == n){
                printf("-");
            }
            else if(col == n){
                printf("|");
            }
            else{
                printf("%d", iarray[x%9]);
                x++;
            }
        }
        puts("");
    }
}//end get_symbol
