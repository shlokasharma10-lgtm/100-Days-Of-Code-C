#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK
};

int main() {
    enum Colors color;

    char *names[] = {
        "RED",
        "GREEN",
        "BLUE",
        "YELLOW",
        "BLACK"
    };

    for (color = RED; color <= BLACK; color++) {
        printf("%s = %d\n", names[color], color);
    }

    return 0;
}