// Q40: 1's complement of a binary number

#include <stdio.h>

int main() {
    int n, rem, rev = 0;
    scanf("%d", &n);

    while(n > 0) {
        rem = n % 10;
        rem = (rem == 0) ? 1 : 0;
        rev = rev * 10 + rem;
        n /= 10;
    }
    
    int comp = 0;
    while(rev > 0) {
        comp = comp * 10 + rev % 10;
        rev /= 10;
    }
    printf("%d\n", comp);
    return 0;
}
