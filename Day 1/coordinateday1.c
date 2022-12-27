#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter coordinate\n");
    scanf("%d%d", &a, &b);
    if (a > 0 && b > 0)
        printf("First quadrant");
    else if (a > 0 && b < 0)
        printf("Fourth quadrant");
    else if (a < 0 && b < 0)
        printf("Third quadrant");
    else
        printf("Second quadrant");

    return 0;
}