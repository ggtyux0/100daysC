#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"John", MALE};
    printf("Name: %s, Gender: %d\n", p.name, p.gender);
    return 0;
}
