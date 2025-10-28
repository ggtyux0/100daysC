//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = (i == 1) ? 1 : (2 * i);
        sum += (double)numerator / denominator;
    }
    printf("%.6f", sum);
    return 0;
}
