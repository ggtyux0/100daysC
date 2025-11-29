#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n = 3;
    struct Student students[3];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    struct Student top = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    printf("%s %d %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
