#include <stdio.h>

int main() {
    int a[100], n, i;
    int candidate, count = 0, frequency = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Find candidate
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        } else if (a[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify candidate
    for (i = 0; i < n; i++) {
        if (a[i] == candidate)
            frequency++;
    }

    if (frequency > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}