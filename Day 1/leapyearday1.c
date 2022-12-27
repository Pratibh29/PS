#include <stdio.h>;
int main()
{
    int x;
    printf("Enter year\n");
    scanf("%d", &x);
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 9)
        printf("Leap year");
    else
        printf("Not");
    return 0;
}