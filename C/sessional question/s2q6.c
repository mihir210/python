/*
Write a C program to find the sum of natural numbers using recursion, where n is entered
by user.(Hint: Sum = n+(n-1)+….+2+1)
*/

#include <stdio.h>

int sum_no(int n)
{
    if (n > 0)
    {
        return (n + sum_no(n - 1));
    }
}

int main()
{
    int n, sum;

    printf("enter the number ");
    scanf("%d", &n);

    sum = sum_no(n);
    printf("sum is %d", sum);
    return 0;
}
