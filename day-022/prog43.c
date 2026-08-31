//Check Whether a Number is Strong
#include <stdio.h>

int main()
{
    int n, original, digit;
    int fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not a strong number");
        return 0;
    }

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}