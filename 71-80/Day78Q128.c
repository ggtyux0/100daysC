#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    int vowels = 0, consonants = 0;
    char ch;
    
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    fclose(fp);
    return 0;
}
