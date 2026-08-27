//Find HCF (GCD) of Two Numbers
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 && b == 0)
    {
        printf("GCD is undefined");
    }
    else
    {
        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }

        printf("HCF = %d", a);
    }

    return 0;
}