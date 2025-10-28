// Q39: Product of odd digits of a number

#include <stdio.h>

int main() {
    int n, rem, product = 1, odd_found = 0;
    scanf("%d", &n);
    while(n > 0) {
        rem = n % 10;
        if(rem % 2 != 0) {
            product *= rem;
            odd_found = 1;
        }
        n /= 10;
    }
    if(!odd_found)
        product = 1;
    printf("%d\n", product);
    return 0;
}
