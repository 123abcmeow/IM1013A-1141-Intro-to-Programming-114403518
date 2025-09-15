#include <stdio.h>
int main(void){

    float iTempC , iTempF;
    printf("Enter temperature(Celsius):");
    scanf("%f",&iTempC);
    iTempF = iTempC * 9 / 5 +32;
    printf("%fC converts to Fahrenheit is :%.2fF hehe\n",iTempC,iTempF);

}//end main