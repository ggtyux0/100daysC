//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main() {
    char str[100], surname[100];
    int i = 0, k = 0, last_space = -1;
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ')
            last_space = i;
        i++;
    }
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(i == 0 && str[i] != ' ')
            printf("%c", str[i]);
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n' && i+1 != last_space+1)
            printf("%c", str[i+1]);
    }
    k = 0;
    for(i = last_space+1; str[i] != '\0' && str[i] != '\n'; i++)
        surname[k++] = str[i];
    surname[k] = '\0';
    printf(" %s", surname);
    return 0;
}
