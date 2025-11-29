#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    char name[50];
    int roll, marks;
    
    printf("Enter student records (name roll marks, Enter 'quit' to stop):\n");
    while (scanf("%s %d %d", name, &roll, &marks) == 3) {
        if (strcmp(name, "quit") == 0) break;
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    
    fp = fopen("students.txt", "r");
    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
