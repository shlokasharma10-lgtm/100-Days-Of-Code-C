/* Print a pattern with different groups of stars
*

*
*
*

*
*
*
*
*

*
*
*

*   */

#include <stdio.h>

int main()
{
    int i, j;
    int groups[] = {1, 3, 5, 3, 1};

    for (i = 0; i < 5; i++)
    {
        for (j = 1; j <= groups[i]; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}