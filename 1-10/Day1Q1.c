// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main(){
    int n1 , n2 , sum ;
    printf("Input:\n");
    scanf("%d %d",&n1,&n2);

    sum = n1 + n2 ;

    printf("Sum=%d",sum);
    
    return 0;
}
