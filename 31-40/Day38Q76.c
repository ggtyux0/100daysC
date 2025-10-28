// Q76: Check if a matrix is symmetric

#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    bool symmetric = true;

    if (rows != cols) {
        symmetric = false;
    } else {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                scanf("%d", &matrix[i][j]);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = false;
                    break;
                }
            }
            if (!symmetric) break;
        }
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
