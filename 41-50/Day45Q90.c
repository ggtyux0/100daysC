//Q90: Toggle case of each character in a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c = c - 32;
        else if(c >= 'A' && c <= 'Z')
            c = c + 32;
        printf("%c", c);
        i++;
    }
    return 0;
}
