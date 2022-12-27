#include <stdio.h>;
int main()
{
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("First number is greater");
    else if (b > a && b > c)
        printf("Secomd number is greater");
    else if (c > a && c > b)
        printf("Third number is greater");

    return 0;
}