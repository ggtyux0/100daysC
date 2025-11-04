//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int freq[26] = {0}, i = 0, j = 0;
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    while(s1[i] != '\0' && s1[i] != '\n') {
        if(s1[i] >= 'a' && s1[i] <= 'z')
            freq[s1[i] - 'a']++;
        i++;
    }
    while(s2[j] != '\0' && s2[j] != '\n') {
        if(s2[j] >= 'a' && s2[j] <= 'z')
            freq[s2[j] - 'a']--;
        j++;
    }
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}

