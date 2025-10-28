// Q68: Delete an element from an array

#include <stdio.h>

void deleteElement(int arr[], int *n, int key) {
    int i = 0;
    while (i < *n && arr[i] != key) {
        i++;
    }
    if (i == *n)
        return;

    for (int j = i; j < *n - 1; j++)
        arr[j] = arr[j + 1];

    (*n)--;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int key;
    scanf("%d", &key);

    deleteElement(arr, &n, key);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
