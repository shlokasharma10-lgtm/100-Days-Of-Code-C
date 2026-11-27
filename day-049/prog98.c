//Print initials of a name with the surname displayed in full
#include <stdio.h>

int main()
{
    char name[100];
    int i, start = 0, end;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last non-space character
    end = 0;

    while (name[end] != '\0' && name[end] != '\n')
        end++;

    end--;

    while (end >= 0 && name[end] == ' ')
        end--;

    // Print initials of all words except surname
    for (i = 0; i <= end; i++)
    {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
        {
            if (i > 0)
                printf(" ");

            if (name[i] == '\0')
                break;

            // Check if this is the surname
            if (i == end)
                printf("%c", name[i]);
            else
            {
                int j = i;

                while (name[j] != ' ' && name[j] != '\0')
                    j++;

                if (j > end)
                {
                    printf("%c", name[i]);
                }
                else
                {
                    printf("%c.", name[i]);
                }
            }
        }
    }

    // Print surname in full
    i = end;

    while (i >= 0 && name[i] != ' ')
        i--;

    printf(" ");

    for (i = i + 1; i <= end; i++)
        printf("%c", name[i]);

    return 0;
}