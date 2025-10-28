// Q51: Print pattern
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main() {
    int n = 5;
    for(int i=1; i<=n; i++) {
        for(int space=0; space<n - i; space++) {
            printf(" ");
        }
        for(int num=n - i + 1; num<=5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
