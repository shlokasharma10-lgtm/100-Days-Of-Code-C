#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role role;
    int choice;

    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");

    printf("Enter role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have normal access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.");
            break;

        default:
            printf("Invalid role");
    }

    return 0;
}