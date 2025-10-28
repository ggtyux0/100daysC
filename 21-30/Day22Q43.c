//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, sum = 0, temp, digit;
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == num) {
        printf("Strong number");
    } else {
        printf("Not strong number");
    }
    return 0;
}
