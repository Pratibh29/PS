#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, x, f = 1, n, c = 1, p = 1;
    float s = 0;
    printf("Enter value of n\n");
    scanf("%d", &n);
    printf("Enter value of x\n");
    scanf("%d", &x);

    for (i = 1; i <= n; i = i + 2)
    {
        for (j = 1; j <= i; j++)
        {
            p = p * x;
        }
        for (k = 1; k <= i; k++)
        {
            f = f * k;
            if (c % 2 == 1)
            {
                s = s + (p / f);
                c++;
            }
            else
                s = s - (p / f);
        }
    }
    printf("Sum:%f", s);
    return 0;
}