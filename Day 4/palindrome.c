#include <stdio.h>
int palin(int n)
{
    int m, a, s = 0;
    m = n;
    while (n > 0)
    {
        a = n % 10;
        s = s * 10 + a;
        n = n / 10;
    }
    if (s == m)
        return 1;
    else
        return 0;
}

int main()
{
    int n, m, s;
    printf("Enter number:");
    scanf("%d", &n);
    m = n;
    palin(n);
    if (palin(n) == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
