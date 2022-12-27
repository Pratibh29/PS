#include <stdio.h>
int main()
{
    float temp;
    printf("Enter temperature in Centrigrade\n");
    scanf("%f", &temp);
    if (temp < 0)
        printf("Freezing Weather");
    else if (temp >= 40)
        printf("Very hot");
    else if (temp > 0 && temp < 10)
        printf("VEry cool waether");
    else if (temp > 10 && temp < 20)
        printf("COld Weather");
    else if (temp > 20 && temp < 30)
        printf("Normal");
    else if (temp > 30 && temp < 40)
        printf("Hot");
    return 0;
}