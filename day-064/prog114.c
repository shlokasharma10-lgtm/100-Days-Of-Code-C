#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int last[256];
    int i, start = 0, maxLength = 0, length;

    fgets(s, sizeof(s), stdin);

    length = strlen(s);

    if (length > 0 && s[length - 1] == '\n')
        s[--length] = '\0';

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        if (i - start + 1 > maxLength)
            maxLength = i - start + 1;
    }

    printf("%d", maxLength);

    return 0;
}