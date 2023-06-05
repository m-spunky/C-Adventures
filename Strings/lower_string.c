#include <stdio.h>
#include <string.h>
#include <ctype.h>


void to_lower(char* str,int len){
    for(int i=0;i<len;i++){
        if (str[i]==' '){
            str[i] = ' ';
        }
        else if (str[i]>64 && str[i]<91){
           str[i] = str[i] + 32;  
        };
         
    };
};
int main(){
    char s1[] = "mayur dhananjay jadhav";
    to_lower(s1,sizeof(s1)-1);
    printf("%s\n",s1);
 
    return 0;
};