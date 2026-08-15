#Check Whether a Number is Positive, Negative or Zero
#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Positive number");
    }
    else
    {
        if (n < 0)
        {
            printf("Negative number");
        }
        else
        {
            printf("Zero");
        }
    }

    return 0;
}