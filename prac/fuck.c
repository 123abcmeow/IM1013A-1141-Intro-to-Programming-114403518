#include<stdio.h>

int main(void){
    int isize = 4;
    int arr[4][4];
    int co = 0;
    int arr2[4][4];

    for(int i = 0; i < isize; i++){
        for(int j = 0; j < isize; j++){
            if(j <= i){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = 0;
            }
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    puts("");
    while(co < 4){
        for(int i = 0; i < isize; i++){
            for(int j = 0; j < isize; j++){
                arr2[i][j] = arr[3 - j][i];
                if(arr2[i][j] == 1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            puts("");
        }
        co++;
        puts("");
        for(int i = 0; i < isize; i++){
            for(int j = 0; j < isize; j++){
                arr[i][j] = arr2[i][j];
            }
        }
    }
    
    


}//end main