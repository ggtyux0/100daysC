// Q61: Search for an element in an array using linear search

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
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

    int index = linearSearch(arr, n, key);
    if (index == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", index);

    return 0;
}
