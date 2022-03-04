#include <stdio.h>


int main()
{
    float n;

    int k;

    printf("enter the number :");
    scanf("%f", &n);

    if (n < 0)
    {
        k = n - 0.5;
    }
    else
    {
        k = n + 0.5;
    }

    printf("number after rounding %d", k);

    return 0;
}