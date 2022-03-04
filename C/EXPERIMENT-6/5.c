/*
W.A.P which find the reverse of a given string.
*/

#include <stdio.h>

int main()
{
    int i, len = 0;
    char str[80], temp[80];

    printf("Enter the string :");
    gets(str);

    for (i = 0; str[i] != '\0'; i++);
    len=i;

    for (i = 0; i < len / 2; i++)
    {
        temp[i] = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp[i];
    }
    printf("reverse of string : %s", str);

    return 0;
}
