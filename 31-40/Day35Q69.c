// Q69: Find the second largest element in an array

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int secondLargest = findSecondLargest(arr, n);
    printf("%d\n", secondLargest);

    return 0;
}
