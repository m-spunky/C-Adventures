#include<stdio.h>

int leap(int year){
    if(year % 400 == 0){
    
        return 1;
    }
    else if(year % 100 != 0){
            if(year % 4 == 0){
                return 1;
            }
            else{
                return 0;
            }
        }
    else{
        return 0;
    };

    };
    

int main(){
    int year = 2004;
    int list[] = {4089,1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000};

    for (int i =0;i<sizeof(list)/sizeof(int);i++){
    if(leap(list[i]) == 1){
        printf("%d is a leap year",list[i]);
    }
    else{
        printf("%d is a not a leap year",list[i]);
    };
    printf("\n");

    }

    return 0;
}