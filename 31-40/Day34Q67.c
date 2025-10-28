// Q67: Insert an element in an array at a given position

#include <stdio.h>

void insertAtPosition(int arr[], int *n, int pos, int val, int capacity) {
    if (*n >= capacity || pos > *n || pos < 0)
        return;

    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    (*n)++;
}

int main() {
    int n, capacity;
    scanf("%d", &n);
    capacity = n + 1;  
    int arr[capacity];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos, val;
    scanf("%d %d", &pos, &val);

    insertAtPosition(arr, &n, pos, val, capacity);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
