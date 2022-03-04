/*
W.A.P which check whether given string is palindrome or not
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, len = 0, flag = 0;

    char str[100];

    printf("Enter the string :");
    gets(str);

    for (i = 0; str[i] != '\0'; i++);
    len=i;

    for (i = 0; i < len/2; i++)
    {
        if (str[i] != str[len - i - 1])
            flag = 1;
        break;
    }

    if (flag == 0)
    {
        printf("string are palindrome.\n");
    }
    else
    {
        printf("string are not palindrome.");
    }

    return 0;
}