#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTop(struct Student students[], int n) {
    struct Student top = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}

int main() {
    struct Student s1 = {"John", 101, 85};
    struct Student s2 = {"Alice", 102, 92};
    struct Student students[] = {s1, s2};
    struct Student top = findTop(students, 2);
    printf("%s %d\n", top.name, top.marks);
    return 0;
}
