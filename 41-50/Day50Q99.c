//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main() {
    char date[20];
    int i = 0;
    fgets(date, 20, stdin);
    while(date[i] != '\0' && date[i] != '\n') {
        if(date[i] == '/' && date[i+1] == '0' && date[i+2] == '4' && date[i+3] == '/') {
            printf("-Apr-");
            i += 3;
        } else {
            printf("%c", date[i]);
        }
        i++;
    }
    return 0;
}
