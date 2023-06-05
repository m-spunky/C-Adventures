#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char reverse_string(char* str1,int length){
    char temp;
    for(int i =0;i<abs(length/2);i++){
        temp = str1[i];
        str1[i] = str1[length-1-i];
        str1[length-1-i] = temp;
    };
};

int main(){
    char str1[] = "statement";
    reverse_string(str1,sizeof(str1)-1);
    
    return 0;
}