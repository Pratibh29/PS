#include <stdio.h>
#include <math.h>
int main()
{
    int i, x, f = 1, n;
    float s = 0;
    printf("Enter value of n\n");
    scanf("%d", &n);
    printf("Enter value of x\n");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        f = f * i;
        s = 1 + (pow(x, i) / f);
    }
    printf("Sum:%f", s);

    return 0;
}
