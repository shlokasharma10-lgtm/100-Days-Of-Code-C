//Rotate an array to the right by k positions

#include <stdio.h>

void reverse(int a[], int start, int end)
{
    int temp;

    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int a[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    reverse(a, 0, n - 1);
    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}