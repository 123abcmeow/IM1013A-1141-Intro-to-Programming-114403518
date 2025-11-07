#include<stdio.h>
int multiply(int);
double division(int, int);
float bmi(float, float);

int main(void){

    float a, b;
    float Bmi;
    printf("Enter hight and weight: ");
    scanf("%f %f", &a, &b);
    a = a/100;
    Bmi = bmi(a, b);
    printf("BMI: %.2f\n", Bmi);
}//end main
int multiply(int x){
    int ans;
    ans = x * x;
    return ans;
}
double division(int x, int y){
    double ans;
    ans = (double)x / (double)y;
    return ans;
}
float bmi(float x, float y){
    float ans;
    ans = y / (x * x);
    return ans;
}