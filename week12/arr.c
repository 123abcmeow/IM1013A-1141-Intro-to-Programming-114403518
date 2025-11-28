#include <stdio.h>
#define ARR_SIZE 5
int main(void){
    int sum=0;
    int arr[ARR_SIZE]={0};
    for(int i=0;i<ARR_SIZE;i++){
        printf("Array elements are:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(int i=0;i<ARR_SIZE;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Sum of array elements=%d\n",sum);

}//end main