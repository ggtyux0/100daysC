//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0, i = 0;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if(c == ' ')
            spaces++;
        else if(c >= '0' && c <= '9')
            digits++;
        else if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            special++;
        i++;
    }
    printf("Spaces = %d, Digits = %d, Special = %d", spaces, digits, special);
    return 0;
}

