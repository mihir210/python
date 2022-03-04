/*
Write a C program to compute result of first n terms for following series. Take n as an input.
1^2/1 - 2^3/2 + 3^4/3 - 4^5/4 + ... n^(n+1)/n
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, j, n, sum = 0;

    printf("enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum - pow(-1, i) * pow(i, i);
    }

    printf("%d", sum);

    return 0;
}
