#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    char ch;
    
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    
    if (in_word) words++;
    fclose(fp);
    
    printf("Chars: %d, Words: %d, Lines: %d\n", chars, words, lines);
    return 0;
}
