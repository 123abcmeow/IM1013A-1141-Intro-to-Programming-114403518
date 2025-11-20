#include <stdio.h>

int main() {
    int num;
    printf("請輸入一個整數: ");
    
    if (scanf("%d", &num) != 1) {
        printf("輸入的不是數字！\n");
    } else {
        printf("你輸入的數字是 %d\n", num);
    }
}