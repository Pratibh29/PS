#include <stdio.h>
int main()
{
    int bs, ts;
    char g;
    printf("Enter basic salary\n");
    scanf("%d", &bs);
    printf("Enter Grade\n");
    scanf("%s", &g);
    if (g == 'A')
    {
        ts = bs + 0.2 * bs + 0.5 * bs + 1700 - 0.11 * bs;
        printf("Total Salary:%d", ts);
    }
    else if (g == 'B')
    {
        ts = bs + 0.2 * bs + 0.5 * bs + 1500 - 0.11 * bs;
        printf("Total Salary:%d", ts);
    }
    else
    {
        ts = bs + 0.2 * bs + 0.5 * bs + 1300 - 0.11 * bs;
        printf("Total Salary:%d", ts);
    }
    return 0;
}