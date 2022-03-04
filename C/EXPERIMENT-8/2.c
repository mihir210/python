/*
Implement Sum of digits of a given number using Recursion.
*/

#include <stdio.h>

int s(int x)
{
    if (x > 0)
        return (x % 10 + s(x / 10));
}

int main()
{
    int n, sum;

    printf("enter the number :");
    scanf("%d", &n);

    sum = s(n);

    printf("sum of digit is %d", sum);

    return 0;
}
