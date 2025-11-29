#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    printf("Enter name, roll_no, marks: ");
    scanf("%s %d %d", s.name, &s.roll_no, &s.marks);
    printf("%s %d %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
