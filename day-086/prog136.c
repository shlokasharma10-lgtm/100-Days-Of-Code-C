#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter choice: ");
    scanf("%d", (int *)&choice);

    switch (choice) {
        case ADD:
            printf("Result = %.2f", a + b);
            break;

        case SUBTRACT:
            printf("Result = %.2f", a - b);
            break;

        case MULTIPLY:
            printf("Result = %.2f", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}