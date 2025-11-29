#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);
    
    int count1[26] = {0};
    int count2[26] = {0};
    
    for (int i = 0; s[i]; i++) {
        count1[s[i] - 'a']++;
    }
    for (int i = 0; t[i]; i++) {
        count2[t[i] - 'a']++;
    }
    
    int is_anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            is_anagram = 0;
            break;
        }
    }
    
    if (is_anagram && strlen(s) == strlen(t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    return 0;
}
