//Perform diagonal traversal of a matrix

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Start diagonals from the top row
    for (j = c - 1; j >= 0; j--)
    {
        int x = 0, y = j;

        while (x < r && y >= 0)
        {
            printf("%d ", a[x][y]);
            x++;
            y--;
        }

        printf("\n");
    }

    // Start remaining diagonals from the left column
    for (i = 1; i < r; i++)
    {
        int x = i, y = c - 1;

        while (x < r && y >= 0)
        {
            printf("%d ", a[x][y]);
            x++;
            y--;
        }

        printf("\n");
    }

    return 0;
}