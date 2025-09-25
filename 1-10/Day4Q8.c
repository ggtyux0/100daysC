// Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main(){
    int n, o;
    printf("Input:\n");
    scanf("%d",&n);

    o = n * (n+1)/2 ;
    
    printf("Output: %d", o);

    return 0;
}