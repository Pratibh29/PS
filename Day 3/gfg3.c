#include <stdio.h>

int main()
{
    int i, j, b = 1, rows, count = 0;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (i = 0; i < 2 * rows; i = i + 2)
    {
        for (j = 0; j <= i; j++)
        {

            printf("%d", b);
            if (j < i / 2)
            {
                count++;
            }
            else
            {
                count--;
            }
                }
        b++;
        count = 0;
        printf("\n");
    }
    return (0);
}