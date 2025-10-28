// Q65: Search in a sorted array using binary search

#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &key);

    int index = binarySearch(arr, n, key);
    if (index == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", index);

    return 0;
}
