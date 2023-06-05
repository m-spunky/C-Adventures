#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_upper(char* str,int len){
    for(int i=0;i<len;i++){
        if (str[i]==' '){
            str[i] = ' ';
        }
        else if (str[i]>96 && str[i]<123){
           str[i] = str[i] - 32;  
        };
        
    };
};

int main(){
    char s1[] = "mayur dhananjay jadhav";
    to_upper(s1,sizeof(s1)-1);
    printf("%s\n",s1);

    return 0;
};