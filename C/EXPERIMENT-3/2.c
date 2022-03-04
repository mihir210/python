/*Write a C program to check if a given Number is Zero or Positive or Negative Using
if...else statement.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number :");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d is positive number.\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative number.\n", n);
    }
    else
    {
        printf("number is zero.");
    }

    return 0;
}
