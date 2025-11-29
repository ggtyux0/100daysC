//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_sum = 0;
    for (int i = 0; i <= n - k; i++) {
        int current_sum = 0;
        for (int j = i; j < i + k; j++) {
            current_sum += arr[j];
        }
        if (i == 0 || current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("%d\n", max_sum);
    
    return 0;
}
