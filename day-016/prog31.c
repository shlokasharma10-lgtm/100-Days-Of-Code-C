//Convert Decimal Number to Binary
#include <stdio.h>

int main()
{
    int n, binary = 0, remainder;
    int place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a non-negative number");
    }
    else if (n == 0)
    {
        printf("Binary = 0");
    }
    else
    {
        while (n > 0)
        {
            remainder = n % 2;
            binary = binary + remainder * place;
            place = place * 10;
            n = n / 2;
        }

        printf("Binary = %d", binary);
    }

    return 0;
}