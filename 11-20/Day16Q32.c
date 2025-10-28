// Q32: Check if a number is palindrome

#include <stdio.h>

int main() {
    int n, rev=0, rem, temp;
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if(rev == n)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
