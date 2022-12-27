#include <stdio.h>
int main()
{
    int i, j, k, b = 1;
    for (i = 1; i <= 4; i++)
    {
        for (k = 1; k <= 4 - i; k++)
        {
            printf(" ");
        }
        b = i;
        for (j = 1; j <= i; j++)
        {

            printf("%d", b);
            b--;
        }
        b = 1;
        for (k = 1; k <= 3 - i; k++)
        {
            printf("");
        }
        for (j = 1; j < i; j++)
        {
            ++b;
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}