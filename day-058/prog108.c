#include <stdio.h>

int main() {
    int a[100], answer[100];
    int n, i, prefix = 1, suffix = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Calculate prefix products
    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= a[i];
    }

    // Multiply by suffix products
    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= a[i];
    }

    for (i = 0; i < n; i++)
        printf("%d ", answer[i]);

    return 0;
}