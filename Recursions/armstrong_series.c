#include<stdio.h>
int armstrong(int n){
    int num = n;
    int total = 0;
    while(n>0){
        int rem = n % 10;
        total = total + (rem * rem * rem);
        n = n / 10;

    };
    if (total == num){
        return 1;
    };
};
int main(){
    int n = 371;
    int res = armstrong(n);
    if(res==1){
        printf("%d is a armstrong number",n);
    }
    else{
        printf("%d is not a armstrong number",n);
    }
    return 0;
}