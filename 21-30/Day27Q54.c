/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int n = 7; 
    int mid = (n + 1) / 2;

    for (int i = 1; i <= mid; i++) {
        for (int space = 0; space < mid - i; space++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = mid - 1; i >=1; i--) {
        for (int space = 0; space < mid - i; space++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
