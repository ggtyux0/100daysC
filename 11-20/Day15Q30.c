//Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0;
    scanf("%d", &num);
    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("%d\n", reversed);
    return 0;
}
