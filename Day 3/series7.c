#include <stdio.h>
#include <math.h>
int main()
{
    int n, f = 1;
    float s = 0;
    printf("Enter value of n\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = (2 * f - 1) * 1;
        for (int a = 0; a < n; a++)
        {
            s = pow((-1), a) * (i / f);
        }
    }
    printf("Sum:%f", s);
    return 0;
}