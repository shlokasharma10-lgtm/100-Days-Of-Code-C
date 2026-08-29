//Find 1's Complement of a Binary Number
#include <stdio.h>

int main()
{
    long long n, complement = 0;
    long long place = 1;
    int digit, valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    if (n < 0)
    {
        valid = 0;
    }
    else if (n == 0)
    {
        complement = 1;
    }
    else
    {
        while (n != 0)
        {
            digit = n % 10;

            if (digit != 0 && digit != 1)
            {
                valid = 0;
                break;
            }

            complement = complement + (1 - digit) * place;
            place = place * 10;
            n = n / 10;
        }
    }

    if (valid == 1)
        printf("1's Complement = %lld", complement);
    else
        printf("Invalid binary number");

    return 0;
}