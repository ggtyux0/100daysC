// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h> 
int main(){
    unsigned long int n, i, product = 1;

    printf("Input:\n");
    scanf("%llu", &n);

    for(i=2;i<=n;i+=2){
        product *= i;
    }
    printf("%llu", product);

    return 0;
}