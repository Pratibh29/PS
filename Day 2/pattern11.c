#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= i; j++)
        {
            int b = j;
            printf("%d", b);
            b++;
        }
        printf("\n");
        for (j = 5; j >= i; j--)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            int b = k;
            printf("%d", b);
        }
        printf("\n");
    }

    return 0;
}
