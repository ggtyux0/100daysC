// Q66: Insert an element in a sorted array at the appropriate position

#include <stdio.h>

void insertSorted(int arr[], int *n, int key, int capacity) {
    if (*n >= capacity)
        return;

    int i;
    for (i = *n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];

    arr[i + 1] = key;
    (*n)++;
}

int main() {
    int n, capacity;
    scanf("%d", &n);
    capacity = n + 1;
    int arr[capacity];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int key;
    scanf("%d", &key);

    insertSorted(arr, &n, key, capacity);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
