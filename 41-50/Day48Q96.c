//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
int main() {
    char str[200];
    char word[100];
    int i = 0, k = 0, j;
    fgets(str, 200, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] != ' ') {
            word[k++] = str[i];
        } else {
            for(j = k-1; j >= 0; j--)
                printf("%c", word[j]);
            printf(" ");
            k = 0;
        }
        i++;
    }
    for(j = k-1; j >= 0; j--)
        printf("%c", word[j]);
    return 0;
}
