#include <stdio.h>


int find_max(int arr[],int length){
  int max = arr[0];
  for(int i = 1;i<length;i++){
      if (arr[i] > max){
          max = arr[i];
      };
  };

    return max;
};



int main()
{
    int array[]={3,5,6,8,9,1};
    int length = (sizeof(array)/sizeof(int));
    int max = find_max(array,length);

    printf("Maximum Value : %d",max);
    return 0;
}