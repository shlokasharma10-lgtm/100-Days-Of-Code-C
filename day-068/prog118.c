#include <stdio.h>

int main() {
    int a[100], n, i;
    long long expectedSum, actualSum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        actualSum += a[i];
    }

    expectedSum = (long long)n * (n + 1) / 2;

    printf("%lld", expectedSum - actualSum);

    return 0;
}