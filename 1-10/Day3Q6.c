// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main(){
    int n1, n2, t;
    
    printf("Enter numbers to swap:\n");
    scanf("%d %d", &n1, &n2);
    printf("Before swap: %d %d\n", n1, n2);

    t = n1;
    n1 = n2;
    n2 = t;

    printf("After swap: %d %d", n1, n2);

    return 0;
}