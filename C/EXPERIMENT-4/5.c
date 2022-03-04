/*
W.A.P to check whether the input number is prime or not.
*/

#include <stdio.h>

int main()
{
    int m, no;
    char c = 'p';

    printf("Enter the number :");
    scanf("%d", &no);

    for (m = 2; m <= no - 1; m++)

    {
        if (no % m == 0)
        {
            c = 'n';
        }
    }

    if (c == 'p')
    {
        printf("%d is a prime number.", no);
    }
    else
    {
        printf("%d is not a prime number.", no);
    }

    return 0;
}
