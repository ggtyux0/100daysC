//Q83: Count vowels and consonants in a string.

#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("Vowels = %d, Consonants = %d", vowels, consonants);
    return 0;
}

