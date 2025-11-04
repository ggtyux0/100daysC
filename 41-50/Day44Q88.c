//Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ')
            printf("-");
        else
            printf("%c", str[i]);
        i++;
    }
    return 0;
}
