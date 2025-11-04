//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[100];
    int count = 0, i = 0;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;
}
