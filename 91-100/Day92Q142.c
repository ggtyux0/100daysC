#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Student %d (name roll marks): ", i+1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    for (int i = 0; i < 5; i++) {
        printf("%s %d %d\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}
