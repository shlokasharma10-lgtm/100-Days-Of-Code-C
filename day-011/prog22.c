//Calculate Profit or Loss Percentage
#include <stdio.h>

int main()
{
    float cp, sp, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (cp <= 0)
    {
        printf("Invalid cost price");
    }
    else if (sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", percentage);
    }
    else if (sp < cp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", percentage);
    }
    else
    {
        printf("No profit, no loss");
    }

    return 0;
}