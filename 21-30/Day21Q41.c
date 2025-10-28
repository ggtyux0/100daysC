//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, middlePart, swappedNum;
    scanf("%d", &num);
    temp = num;

    lastDigit = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    if (digits == 0) {
        printf("%d", num);
        return 0;
    }

    middlePart = (num % (int)pow(10, digits)) / 10;

    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("%d", swappedNum);
    return 0;
}
