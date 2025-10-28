//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1;
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    printf("%d\n", factorial);
    return 0;
}
