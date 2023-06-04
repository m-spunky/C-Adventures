#include <stdio.h>

double arr_sum(double array[],int length){
    double sum = 0;
    for(int i = 0;i<length;i++){
        sum = sum + array[i];
    };
    return (sum / length);
};

int main(){
    double arr[] = {5.3,3.6,6.8,7.9,9.6,4.0};
    int len = 6;
    
    double avg = arr_sum(arr,len);
    printf("%.2f",avg);
    return 0;
}