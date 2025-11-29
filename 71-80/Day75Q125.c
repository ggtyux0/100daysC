#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "a");
    char text[1000];
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    fprintf(fp, "%s", text);
    fclose(fp);
    
    printf("Text appended successfully\n");
    return 0;
}
