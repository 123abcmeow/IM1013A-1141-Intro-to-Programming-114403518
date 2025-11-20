#include <stdio.h>

int main(void){
    int w, h, t;

    printf("Width: ");
    scanf("%d", &w);

    printf("Height: ");
    scanf("%d", &h);

    printf("Border thickness: ");
    scanf("%d", &t);

    for(int r = 0; r < h; r++){
        for(int c = 0; c < w; c++){
            if(r < t || r >= h - t || c < t || c >= w - t){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
