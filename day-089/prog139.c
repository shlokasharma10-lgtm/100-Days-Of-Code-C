#include <stdio.h>

enum Subjects {
    C = 101,
    MATHS = 102,
    PHYSICS = 103,
    CHEMISTRY = 104
};

int main() {
    enum Subjects s;

    s = C;
    printf("C = %d\n", s);

    s = MATHS;
    printf("MATHS = %d\n", s);

    s = PHYSICS;
    printf("PHYSICS = %d\n", s);

    s = CHEMISTRY;
    printf("CHEMISTRY = %d\n", s);

    return 0;
}