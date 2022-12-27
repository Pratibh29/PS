#include <stdio.h>
int main()
{
    int n;
    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (j <= i)
                printf("%d ", j);
            else
                printf("  ");
        }
        for (int j = 6; j >= 1; j--)
        {
            if (j <= i)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

/*for( int j=n;j>=1;j-- )
       {
           if(j<=i)
               printf("%d ",j);
           else
               printf("  ");
       } */