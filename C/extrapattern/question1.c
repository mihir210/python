#include <stdio.h>

int main()
{
    int n=0, m , s, sum, d, e;

    l1:
    s=0;
    sum=0;
    m=1;
    printf("enter the four digit number");

    scanf("%4d", &n);

    while (n > 100)
    {
        d = n % 10;
        m = m * d;
        sum = sum + d;

        n = n / 10;
    }

    while (n > 0)
    {
        e = n % 10;
        s = s + e;
        sum = sum + e;
        n = n / 10;
    }

    if (s == m)
    {
        printf("%d", sum);
    }
    else
    {
        goto l1;
    }

    return 0;
}
