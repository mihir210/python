/*
write a user defined function power() with will find  the power of given value.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    int p();

    printf("enter the value :");
    scanf("%d", &b);
    printf("enter the value of power :");
    scanf("%d", &c);

    a = p(b, c);

    printf("%d", a);
    return 0;
}

int p(int x, int y)
{
    int a, b = 1;

    for (a = 1; a <= y; a++)
    {
        b = b * x;
    }
    return b;
}