//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0}, i = 0;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if(c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
            if(freq[c - 'a'] == 2) {
                printf("%c", c);
                return 0;
            }
        }
        i++;
    }
    printf("-1");
    return 0;
}
