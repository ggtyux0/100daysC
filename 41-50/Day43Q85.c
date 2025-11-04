//Q85: Reverse a string.

#include <stdio.h>
int main() {
    char str[100];
    int len = 0, i;
    fgets(str, 100, stdin);
    while(str[len] != '\0' && str[len] != '\n')
        len++;
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}

