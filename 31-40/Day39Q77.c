// Q77: Check if the elements on the diagonal of a matrix are distinct

#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    bool distinct = true;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
