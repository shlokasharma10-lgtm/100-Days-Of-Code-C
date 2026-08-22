//Basic Calculator Using Switch Case
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Division by zero is not allowed");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d", a % b);
            else
                printf("Modulus by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}