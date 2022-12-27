#include <stdio.h>

void main()
{
    int i, k = 0;
    for (i = 3; i >= 1; i--)
    {

        for (int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*"); // print the Star
        }
        printf("\n");
    }
    for (i = 2; i <= 3; i++)
    {

        for (int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*"); // print the Star
        }
        printf("\n");
    }
}