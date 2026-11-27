#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, first = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            if (first) {
                str[i] = toupper((unsigned char)str[i]);
                first = 0;
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
    }

    printf("%s", str);

    return 0;
}