#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reciveDate (int *day, int *month, int *year)
{
    printf("Please enter the day: ");
    scanf("%d", day);
    printf("Please enter the month: ");
    scanf("%d", month);
    printf("Please enter the year: ");
    scanf("%d", year);
}

int main (void)
{
    int day = 0, month = 0, year = 0;
    int nd;

    reciveDate (&day, &month, &year);

    if (month < 3)
    {
        month = month+12;
        year = year-1;
    }
    nd = ((13*month+3)/5+day+year+year/4-year/100+year/400)%7;

    switch(nd)
    {
        case 0:
            printf("This day is Monday!\n");
            break;
        case 1:
            printf("This day is Tuesday!\n");
            break;
        case 2:
            printf("This day is Wednesday!\n");
            break;
        case 3:
            printf("This day is Thursday!\n");
            break;
        case 4:
            printf("This day is Friday!\n");
            break;
        case 5:
            printf("This day is Saturday!\n");
            break;
        case 6:
            printf("This day is Sunday!\n");
            break;
    }

    return 0;
}
