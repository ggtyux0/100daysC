// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main(){
    int a;

    printf("Input:\n");
    scanf("%d", &a);

    if(a%100!=0 && a%4 == 0){
            printf("Year is a leap year.\n");
        }
    else {
        if(a%400==0){
            printf("Year is a leap year.\n");
        }
        else
        printf("Year is not a leap year.\n"); 
    }
    return 0;

}