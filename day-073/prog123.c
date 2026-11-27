#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, hasContent = 0, lastChar = '\0';

    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        hasContent = 1;
        lastChar = ch;

        if (ch == '\n')
            lines++;

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        }
    }

    if (hasContent && lastChar != '\n')
        lines++;

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    fclose(fp);

    return 0;
}