//Q91: Remove all vowels from a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if(!(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            printf("%c", c);
        i++;
    }
    return 0;
}
