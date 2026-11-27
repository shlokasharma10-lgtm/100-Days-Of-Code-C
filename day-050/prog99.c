//Change date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4 && dd >= 1 && dd <= 30)
    {
        printf("New date format: %02d-Apr-%04d",
               dd, yyyy);
    }
    else
    {
        printf("Invalid date or month is not April");
    }

    return 0;
}