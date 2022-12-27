#include <stdio.h>
int main()
{
    int day, month, year;
    printf("Enter date");
    scanf("%d%d%d", &day, &month, &year);
    int mon;
    {
        if (month > 2)
            mon = month;
        else
        (
            mon = (10 + month);
            year--;
    }

    int y = year % 100;
    int c = year % 100;
    int w = day + 13 * (mon + 1) / 5 + y + y / 4 + c / 4 + 5 * c;
    w = w % 7;
    switch (w)
    {
    case 0:
        printf("Saturday\n");
        break;
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    }

    return 0;
}