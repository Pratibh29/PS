#include <stdio.h>

void main()
{

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("*");
        }

        printf("\n");
    }
}
/*
    1
   212
  32123
 4321234 */
