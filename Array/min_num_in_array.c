#include <stdio.h>

int find_min(int arr[],int length){
  int min = arr[0];
  for(int i = 1;i<length;i++){
      if (arr[i] < min){
          min = arr[i];
      };
  };

    return min;
};

int main(){
    int array[]={3,5,6,8,9,1};
    int length = (sizeof(array)/sizeof(int));
    int min = find_min(array,length);

    printf("\nMinimum Value : %d \n",min);
    return 0;
}