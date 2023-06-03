#include <stdio.h>


int arr_input(int arr[],int length){
    for(int i = 0;i<length;i++){
        scanf("%d",&arr[i]);  
    };
    printf("\nARRAY : ");
    for(int i = 0;i<length;i++){
        printf("%d \t",arr[i]);  
    };  
    return arr[length];
};

int main(){
    int length;
    printf("ENTER LENGTH OF ARRAY : ");
    scanf("%d",&length); 
    int array[length];

    arr_input(array,length);

    return 0;
}