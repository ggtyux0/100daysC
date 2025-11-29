#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role role = ADMIN;
    switch(role) {
        case ADMIN: printf("Full access granted\n"); break;
        case USER: printf("Limited access\n"); break;
        case GUEST: printf("Read-only access\n"); break;
    }
    return 0;
}
