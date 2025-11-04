//Q94: Find the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[200], word[100], longest[100];
    int i = 0, k = 0, maxlen = 0, curlen = 0;
    fgets(str, 200, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] != ' ') {
            word[k++] = str[i];
            curlen++;
        } else {
            word[k] = '\0';
            if(curlen > maxlen) {
                maxlen = curlen;
                int m = 0;
                while(word[m] != '\0') {
                    longest[m] = word[m];
                    m++;
                }
                longest[m] = '\0';
            }
            k = 0;
            curlen = 0;
        }
        i++;
    }
    word[k] = '\0';
    if(curlen > maxlen) {
        int m = 0;
        while(word[m] != '\0') {
            longest[m] = word[m];
            m++;
        }
        longest[m] = '\0';
    }
    printf("%s", longest);
    return 0;
}
