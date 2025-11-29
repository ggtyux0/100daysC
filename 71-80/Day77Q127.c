#include <stdio.h>

int main() {
    FILE *fsrc = fopen("input.txt", "r");
    FILE *fdest = fopen("output.txt", "w");
    
    if (fsrc == NULL || fdest == NULL) {
        printf("File error\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, fdest);
    }
    
    fclose(fsrc);
    fclose(fdest);
    return 0;
}
