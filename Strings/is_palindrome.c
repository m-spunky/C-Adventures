#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_palindrome(char* str1,int length){
    for(int i =0;i<abs(length/2);i++){
        if (str1[i] != str1[length-1-i]){
            return false;
        };
    };
    return true;
}
int main(){
    char str1[] = "abcdceba";
    if(is_palindrome(str1,sizeof(str1)-1)){
        printf("%s is palindrome",str1);
    };
    return 0;
}