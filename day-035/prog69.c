//Find the second largest element in an array

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = 0;

    for (i = 0; i < n; i++)
    {
        if (i == 0 || a[i] > largest)
        {
            if (i != 0)
                second = largest;

            largest = a[i];
        }
        else if (a[i] < largest &&
                 (second == 0 || a[i] > second))
        {
            second = a[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second largest = %d\n", second);

    return 0;
}