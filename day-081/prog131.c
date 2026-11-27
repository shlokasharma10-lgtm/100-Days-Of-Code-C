#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days day;

    for (day = SUNDAY; day <= SATURDAY; day++) {
        switch (day) {
            case SUNDAY: printf("SUNDAY"); break;
            case MONDAY: printf("MONDAY"); break;
            case TUESDAY: printf("TUESDAY"); break;
            case WEDNESDAY: printf("WEDNESDAY"); break;
            case THURSDAY: printf("THURSDAY"); break;
            case FRIDAY: printf("FRIDAY"); break;
            case SATURDAY: printf("SATURDAY"); break;
        }

        printf(" = %d\n", day);
    }

    return 0;
}