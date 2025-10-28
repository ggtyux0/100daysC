// Q45: Sum of Series 2/3 + 4/7 + 6/11 + ...

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0f;
    scanf("%d", &n);
    int numerator = 2, denominator = 3;
    
    for (int i = 0; i < n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
