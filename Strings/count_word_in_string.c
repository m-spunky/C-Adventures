#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// void split(char* str){

// };
int count_word(char* str,char* word){
    int counter = 0;
    int str_len = strlen(str);
    int word_len = strlen(word);

    int end = str_len - word_len + 1;
    for(int i =0;i<end;i++){
    bool word_present = true;

        for(int j =0;j<word_len;j++){
            if (word[j] != str[i+j]){
                word_present = false;

            };

        };
        if(word_present){
            counter++;
        };
    };
    return counter;
};
int main(){
    char str[]="my name is name";
    char word[]="name";

    int count = count_word(str,word);
    printf("%d",count);

}