#include <stdio.h>
int main(void){

    int inumber = 0;
    int iguess = 0;
    int ipassword = 0;
    int a , b , c , d , i ;
    int q , w , e , r ;
    int iA , iB;
    int kk = 1;
    printf("Enter a 4-digits number(1000-9999) to generate a password.:");

    //C沒有跟Python一樣可以簡單檢查的語法嗎，真那個...
    while(kk == 1){
        if(scanf("%d",&inumber) != 1){
            printf("Enter integer= =:");
            while(getchar() != '\n');
            }
        else if(inumber < 1000 || inumber > 9999){
            printf("Number must be 4-digits!!!:");
        }
        else
            kk = 0;
    }
    //密碼計算
    printf("\n[A secret password has been generated, you have 10 rounds to guess it.]\n");
    ipassword = ((inumber * 3 + 1357) % 10000);
    a = ipassword / 1000;
    b = ipassword / 100 % 10;
    c = ipassword / 10 % 10;
    d = ipassword % 10;

    //密碼計算那邊搞不要重複
    while(a == b || a == c || a == d || b == c || b == d || c == d){
        ipassword = ((ipassword * 3 + 1357) % 10000);
        a = ipassword / 1000;
        b = ipassword / 100 % 10;
        c = ipassword / 10 % 10;
        d = ipassword % 10;
    }
    //設定回合加輸入合法數字
    for(i = 0 ; i < 10 ; i++){
        printf("\n--------------|Round %d|--------------\n",i+1);
        printf("Enter your 4-digit number to guess the password:");
        while(kk == 0){
            if(scanf("%d",&iguess) != 1){
                printf("Enter integer, pleaseeeee:");
                    while(getchar() != '\n');
                }
            else if(iguess < 1000 || iguess > 9999){
                printf("Number must be 4-digits!!!:");
            }
            else
                kk = 1;
        }
        kk = 0;//這老師上課好像有說到，有記得...
        q = iguess / 1000;
        w = iguess / 100 % 10;
        e = iguess / 10 % 10;
        r = iguess % 10;

        iA = 0;
        iB = 0;
        int a_used = 0, b_used = 0, c_used = 0, d_used = 0;

        //這個要把猜重複數字也納入幾A幾B超麻煩= =，但現在可以猜重複數字了ㄏㄏ
        if(q == a){
            iA++;
            a_used = 1;
        }
        if(w == b){
            iA++;
            b_used = 1;
        }
        if(e == c){
            iA++;
            c_used = 1;
        }
        if(r == d){
            iA++;
            d_used = 1;
        }
        if(q != a){
            if(q == b && b_used == 0){
                iB++;
                b_used = 1;
            }
            else if(q == c && c_used == 0){
                iB++;
                c_used = 1;
            }
            else if(q == d && d_used == 0){
                iB++;
                d_used = 1;
            }
        }
        if(w != b){
            if(w == a && a_used == 0){
                iB++;
                a_used = 1;
            }
            else if(w == c && c_used == 0){
                iB++;
                c_used = 1;
            }
            else if(w == d && d_used == 0){
                iB++;
                d_used = 1;
            }
        }
        if(e != c){
            if(e == a && a_used == 0){
                iB++;
                a_used = 1;
            }
            else if(e == b && b_used == 0){
                iB++;
                b_used = 1;
            }
            else if(e == d && d_used == 0){
                iB++;
                d_used = 1;
            }
        }
        if(r != d){
            if(r == a && a_used == 0){
                iB++;
                a_used = 1;
            }
            else if(r == b && b_used == 0){
                iB++;
                b_used = 1;
            }
            else if(r == c && c_used == 0){
                iB++;
                c_used = 1;
            }
        }
        printf("You have %dA%dB\n",iA,iB);

        if(iA == 4){
            printf("\nyou win the game, I'll give you 1000000000000 scores!\n");
            break;
        }
    }
    if(i == 10){
        printf("Bro you lose haha! The password is %d%d%d%d\n",a,b,c,d);
    }

}//end