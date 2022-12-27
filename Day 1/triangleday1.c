#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c)
        printf("Equilateral");
    else if (a == b || b == c || c == a)
        printf("Isoceles");
    else
        printf("Scalene");
    return 0;
}