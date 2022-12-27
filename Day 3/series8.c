#include <stdio.h>
int main()
{
    int x, s = 0;
    printf("Enter x\n");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        s = s + i * (i + 1) * (i + 2);
        }
    printf("Sum:%d", s);
    return 0;
}