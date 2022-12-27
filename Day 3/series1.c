#include <stdio.h>
int main()
{
    int s = 0, i, n, f = 1;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        s = s + f;
    }
    printf("Sum:%d", s);

    return 0;
}
