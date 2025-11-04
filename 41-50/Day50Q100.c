//Q100: Print all sub-strings of a string.

#include <stdio.h>
int main() {
    char str[50];
    int i = 0, j, k, len = 0;
    fgets(str, 50, stdin);
    while(str[len] != '\0' && str[len] != '\n')
        len++;
    for(i = 0; i < len; i++) {
        for(j = 1; j <= len - i; j++) {
            for(k = i; k < i + j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
