/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int n = 9; // maximum width of stars
    int mid = (n + 1) / 2;

    for (int i = 1; i <= mid; i++) {
        for (int j = 0; j < 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 0; j < 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
