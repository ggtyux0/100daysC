// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main(){
    int a;
    printf("Input:\n");
    scanf("%d", &a);

    if( a % 2 == 0)
    printf("Number is even.\n");
    else 
    printf("Number is odd.\n");

    return 0;
}