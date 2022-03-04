/*
 Write a User Defined function to convert given integer to a string using concept of character
pointer. Also write down main function to support above scenario.
[6]
Hint:
Input:  Integer
Output:  Char [] OR String

*/

#include <stdio.h>

int main()
{
    int n, j, i = 0, d, len = 0, num;
    char s[100];

    printf("enter the number :");
    scanf("%d", &n);

    num = n;

    while (n != 0)
    {
        len++;
        n = n / 10;
    }

    while (num > 0)
    {
        d = num % 10;
        s[len - i - 1] = d + '0';
        num = num / 10;
        i++;
    }
    s[i] = '\0';

    printf("%s", s);

    return 0;
}
