//Find the Roots of a Quadratic Equation
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation");
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);

            printf("Two distinct real roots: %.2f and %.2f", r1, r2);
        }
        else if (d == 0)
        {
            r1 = -b / (2 * a);

            printf("Two equal real roots: %.2f", r1);
        }
        else
        {
            printf("Two complex roots");
            printf("\nReal part = %.2f", -b / (2 * a));
            printf("\nImaginary part = %.2f", sqrt(-d) / (2 * a));
        }
    }

    return 0;
}