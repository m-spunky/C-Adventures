#include <stdio.h>

int count_occurence(int arr[],int len,int find_of){
    int counter = 0;
    for (int i =0;i<len;i++){
        if(arr[i]==find_of){
            counter++;
        };
    };
    return counter;
};

int main(){
    int arr[] = {5,3,6,7,6,6};
    int len = 6;
    int find_of = 7;
    
    int counter = count_occurence(arr,len,find_of);
    printf("%d occur %d times in given array",find_of,counter);
    return 0;
}