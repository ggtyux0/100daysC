#include <stdio.h>

enum Status {OK=100, ERROR=200};

int main() {
    enum Status s = OK;
    printf("Enum value: %d\n", s);
    printf("Size of enum: %zu bytes\n", sizeof(s));
    return 0;
}
