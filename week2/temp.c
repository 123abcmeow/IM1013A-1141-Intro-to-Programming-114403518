#include <stdio.h>
int main(void){

    float iTempC , iTempF;
    printf("enter temperature(Celsius):");
    scanf("%f",&iTempC);
    iTempF = iTempC * 9 / 5 +32;
    printf("Temperature converts to Fahrenheit is :%.2fF hehe\n",iTempF);

}//end main