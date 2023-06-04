#include <stdio.h>

int arr_sum(int array[],int length){
    int sum = 0;
    for(int i = 0;i<length;i++){
        sum = sum + array[i];
    };
    return sum;
};

int main(){
    int arr[] = {5,3,6,7,9,4};
    int len = 6;
    
    int sum = arr_sum(arr,len);
    printf("%d",sum);
    return 0;
}