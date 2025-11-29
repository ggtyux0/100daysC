#include <stdio.h>

int main() {
    char filename[100];
    printf("Filename: ");
    scanf("%s", filename);
    
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    
    printf("File opened successfully.\n");
    char line[1000];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    
    fclose(fp);
    return 0;
}
