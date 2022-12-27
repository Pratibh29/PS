#include <stdio.h>
int main()
{
    int i, j, b = 1;
    for (i = 1; i >= 5; i--)
    {

        for (j = 1; j <= i; j++)
        {
            b = j;
            printf(" %d ", b);
            b++;
        }
        printf("\n");
    }

    return 0;
}
