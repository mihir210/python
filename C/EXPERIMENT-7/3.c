

#include <stdio.h>

int intrest(float x, float y, float z)
{
    float t = x, n;

    for (n = 1; n <= z; n++)
    {
        t = t * (1 + y / 100);
    }

    return t;
}

int main()
{
    float p, r, n, total;
    int intrest(float, float, float);

    printf("Enter the total principal amount: ");
    scanf("%f", &p);

    printf("\nEnter the intrest rate: ");
    scanf("%f", &r);

    printf("\nEnter the number of years: ");
    scanf("%f", &n);

    total = intrest(p, r, n);

    printf("total amount is %f", total);
    return 0;
}
