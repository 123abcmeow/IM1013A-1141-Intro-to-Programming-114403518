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

#include <stdio.h>

int main() {
    int num;
    int result;

    while (1) {
        printf("請輸入一個整數: ");
        result = scanf("%d", &num);

        if (result == 1) {
            // 讀取成功
            printf("你輸入的數字是 %d\n", num);
            break; // 跳出迴圈
        } else {
            // 讀取失敗，清空輸入緩衝區
            printf("輸入錯誤！請輸入數字。\n");
            while (getchar() != '\n'); // 讀到換行為止，清掉錯誤輸入
        }
    }

    return 0;
}
