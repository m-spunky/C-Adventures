#include <stdio.h>
#include <string.h>
#include <ctype.h>


int count_vowel(char* str,int len){
    int count = 0;
    for(int i =0;i<len;i++){
        switch (toupper(str[i])){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            count++;
        };
    };
    return count;
};

int main(){
    char s1[] = "mayur dhananjay jadhav";
    printf("%s\n",s1);
    int counter = count_vowel(s1,sizeof(s1)-1);
    printf("No. Of Vowels : %d",counter);
    
    return 0;
};