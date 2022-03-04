/*
Write C program to read 4 digit number from input.
For the input number, if sum of 1st and 2nd digit is equal to multiplication of 3rd and 4th digit
then display sum of all digits of that number and terminate program.
Otherwise continue reading next number and repeat the same process.
Example1:
Input:
 1234
 4983
 2346
 3542
Output:
 14
Example2:
Input:

 1231
Output:
 7
*/

#include <stdio.h>

int main()
{
    int i, n, d, mul, c, sum, temp_sum;

l1:
    mul = 1, sum = 0, temp_sum = 0;
    printf("Enter the number :");
    scanf("%4d", &n);

    while (n > 100)
    {
        d = n % 10;
        mul = mul * d;
        sum = sum + d;
        n = n / 10;
    }
    while (n > 0)
    {
        c = n % 10;
        temp_sum = temp_sum + c;
        sum = sum + c;
        n = n / 10;
    }

    if (temp_sum == mul)
    {
        printf("%d", sum);
    }
    else
    {
        goto l1;
    }

    return 0;
}
