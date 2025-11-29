#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status status = SUCCESS;
    switch(status) {
        case SUCCESS: printf("Operation completed\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }
    return 0;
}
