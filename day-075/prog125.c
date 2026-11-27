#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Unable to open file");
        return 1;
    }

    printf("Enter new line: ");
    getchar();  // Consume newline left by scanf
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Data appended successfully");

    return 0;
}