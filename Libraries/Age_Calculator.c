#include <stdio.h>
#include<time.h>

int main()
{
    int year;
    int month;
    int day;
    int age;
    
    time_t s, val = 1;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);

    printf("Age Calculator");
    printf("\nYear : \n");
    scanf("%d",&year);
    printf("\nMonth : \n");
    scanf("%d",&month);
    printf("\nDay : \n");
    scanf("%d",&day);
    
    int day1 = current_time->tm_mday;
    int month1= (current_time->tm_mon + 1);
    int year1 = (current_time->tm_year + 1900);
  
    if  (month > month1){
        int m = year1 - year;
        age = m - 1;
    }
    else{
        age = year1 - year;
    };
        
    
    printf("\nYour Age Is : %d",z);
    return 0;
};