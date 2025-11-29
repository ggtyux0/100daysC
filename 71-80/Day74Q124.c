#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);
    
    FILE *fsrc = fopen(src, "r");
    FILE *fdest = fopen(dest, "w");
    
    if (fsrc == NULL || fdest == NULL) {
        printf("File error\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }
    
    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully\n");
    return 0;
}
