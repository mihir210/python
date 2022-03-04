/*
W.A.P which convert all lower case characters of a given string into upper case and all
upper case characters of a given string into lower case. Also count number of characters
of a given string.
*/

#include <stdio.h>

int main()
{
    int i, len = 0;
    char str[80];

    printf("Enter the string : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        len++;
    }

    printf("%s and total charactor is %d", str, len);

    return 0;
}