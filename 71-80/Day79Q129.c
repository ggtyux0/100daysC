#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;
    
    if (fp == NULL) {
        printf("Create numbers.txt first with space-separated integers\n");
        return 1;
    }
    
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    if (count > 0) {
        printf("Sum: %d, Average: %.2f\n", sum, (float)sum / count);
    } else {
        printf("No numbers found\n");
    }
    
    fclose(fp);
    return 0;
}
