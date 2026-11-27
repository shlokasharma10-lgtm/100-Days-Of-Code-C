#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long long sum, x;

    scanf("%d", &n);

    sum = (long long)n * (n + 1) / 2;
    x = (long long)sqrt((double)sum);

    if (x * x == sum)
        printf("%lld", x);
    else
        printf("-1");

    return 0;
}