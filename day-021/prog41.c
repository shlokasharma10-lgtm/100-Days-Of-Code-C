//Swap First and Last Digit of a Number
#include <stdio.h>

int main()
{
    int n, first, last, temp;
    int divisor = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a positive number");
        return 0;
    }

    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;
    last = n % 10;

    if (divisor == 1)
    {
        result = n;
    }
    else
    {
        middle = (n % divisor) / 10;
        result = last * divisor + middle * 10 + first;
    }

    printf("Number after swapping = %d", result);

    return 0;
}