#include <stdio.h>

void main()
{
    int i;
    for (i = 1; i <= 4; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
    }
    for (int k = 1; k <= (2 * i - 1); k++)
    {
        printf("* "); // print the Star
    }
    printf("\n");
}
