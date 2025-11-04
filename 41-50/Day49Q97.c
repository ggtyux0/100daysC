//Q97: Print the initials of a name.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    fgets(str, 100, stdin);
    if(str[0] != ' ' && str[0] != '\n')
        printf("%c", str[0]);
    i = 1;
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i-1] == ' ' && str[i] != ' ')
            printf("%c", str[i]);
        i++;
    }
    return 0;
}

