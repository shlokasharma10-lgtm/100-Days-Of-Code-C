#include <stdio.h>

int main() {
    int a[100], n, i;
    int actualSum = 0, expectedSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        actualSum += a[i];
    }

    expectedSum = n * (n - 1) / 2;

    printf("%d", actualSum - expectedSum);

    return 0;
}