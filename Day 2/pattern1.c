#include <stdio.h>
int main()
{
    char ch = 'E';

    for (int i = 5; i >= 1; i--)
    {

        for (int j = i; j <= 5; j++)
        {

            printf("%c", ch + 32);
        }

        printf("\n");
    }
    return 0;
}