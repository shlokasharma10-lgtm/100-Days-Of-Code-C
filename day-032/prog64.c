//Find the digit that occurs the most times in an integer

#include <stdio.h>

int main()
{
    long long num;
    int freq[10] = {0};
    int digit, i, max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    if (num == 0)
        freq[0]++;

    while (num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            result = i;
        }
    }

    printf("Most frequent digit = %d\n", result);
    printf("Frequency = %d\n", max);

    return 0;
}