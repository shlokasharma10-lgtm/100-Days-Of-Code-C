//Find the longest word in a sentence
#include <stdio.h>

int main()
{
    char str[200];
    int i, start = 0, length = 0;
    int maxLength = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' ||
            str[i] == '\0')
        {
            if (length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            if (str[i] == '\n' || str[i] == '\0')
                break;

            length = 0;
            start = i + 1;
        }
        else
        {
            length++;
        }
    }

    printf("Longest word: ");

    for (i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength = %d", maxLength);

    return 0;
}