#include <stdio.h>
int main()
{
    int i, f = 1;
    float s = 0;

    for (i = 1; i <= 5; i++)
    {
        f = f * i;
        s = s + (f / i);
    }
    printf("Sum:%f", s);

    return 0;
}
