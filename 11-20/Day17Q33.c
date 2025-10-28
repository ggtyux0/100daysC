//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, count = 0;
    int sum = 0;
    scanf("%d", &n);
    temp = n;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += (int)(pow(rem, count) + 0.5);
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
