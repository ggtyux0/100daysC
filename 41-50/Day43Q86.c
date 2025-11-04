//Q86: Check if a string is a palindrome.

#include <stdio.h>
int main() {
    char str[100];
    int len = 0, i, flag = 1;
    fgets(str, 100, stdin);
    while(str[len] != '\0' && str[len] != '\n')
        len++;
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
