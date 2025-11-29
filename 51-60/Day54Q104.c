//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int findPivot(int n) {
    long long total = (long long)n * (n + 1) / 2;
    long long left_sum = 0;
    
    for (int x = 1; x <= n; x++) {
        left_sum += x;
        long long right_sum = total - left_sum + x;
        if (left_sum == right_sum) {
            return x;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", findPivot(n));
    return 0;
}
