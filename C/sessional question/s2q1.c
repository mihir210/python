/*
 Write a C program to read the string form the user that splits the entered string into two
strings. No. of characters in each string is equal to the half the no. of characters of the
original/ entered string.
Example 1:
Input :
Programming
Output:
String 1 : Progr
String 2 : amming

*/

#include <stdio.h>

int main()
{
    int n, i, len, j;
    char str[50], s1[50], s2[50];

    printf("enter the string :");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
        ;
    len = i;

    for (i = 0; i < len / 2; i++)
    {
        s1[i] = str[i];
    }
    s1[i] = '\0';

    j = 0;
    while (str[i] != '\0')
    {
        s2[j++] = str[i++];
    }
    s2[j] = '\0';

    printf("%s\n%s", s1, s2);

    return 0;
}
