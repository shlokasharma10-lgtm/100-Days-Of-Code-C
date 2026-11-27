#include <stdio.h>

int main() {
    int a[100], n, target;
    int first = -1, last = -1;
    int low, high, mid, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    // Find first occurrence
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (first == -1) {
        printf("-1 -1\n");
        printf("-1 -1");
    } else {
        printf("%d %d\n", a[first], a[last]);
        printf("%d %d", first, last);
    }

    return 0;
}