/*
Implement Exponent function using recursive logic. (exp(x,y) = x^y)
*/

#include <stdio.h>

int Exp(int b, int p)
{
    if (p > 0)
        return (b * Exp(b, p - 1));
    return 1;
}

int main()
{
    int b, p, i;

    printf("enter the base :");
    scanf("%d", &b);

    printf("enter the power :");
    scanf("%d", &p);

    i = Exp(b, p);

    printf("%d ^ %d = %d", b, p, i);

    return 0;
}
