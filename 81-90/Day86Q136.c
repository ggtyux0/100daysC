#include <stdio.h>

enum Operation {ADD, SUBTRACT, MULTIPLY};

int main() {
    int a = 10, b = 5;
    enum Operation op = ADD;
    switch(op) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }
    return 0;
}
