#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    double average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No numbers found in file");
    } else {
        average = (double)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2lf", average);
    }

    fclose(fp);

    return 0;
}