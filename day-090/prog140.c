#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter gender (0-Male, 1-Female, 2-Other): ");
    scanf("%d", &choice);

    if (choice < MALE || choice > OTHER) {
        printf("Invalid gender");
        return 0;
    }

    p.gender = choice;

    printf("\nName: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male");
            break;

        case FEMALE:
            printf("Gender: Female");
            break;

        case OTHER:
            printf("Gender: Other");
            break;
    }

    return 0;
}