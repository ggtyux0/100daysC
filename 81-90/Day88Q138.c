#include <stdio.h>

enum Colors {RED=1, GREEN, BLUE, YELLOW};

int main() {
    for (int i = RED; i <= YELLOW; i++) {
        printf("Value %d\n", i);
    }
    return 0;
}
