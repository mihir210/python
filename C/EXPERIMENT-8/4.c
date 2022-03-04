/*
Read two string from user. Copy last 3 characters of second string to the end of first string
by passing strings to the function
*/

#include <stdio.h>
#include <string.h>

void string(char s1[], char s2[])
{
    int i, len1, len2, j;
    for ( i = 0; s1[i]!='\0'; i++);
    len1=i;
    for ( j = 0; s2[j]!='\0'; j++);
    len2=j;

    for ( j = len2-3;j<len2 ; j++)
    {
        s1[i++]=s2[j];
    }
    s1[i]='\0';


}

int main()
{
    char str1[80], str2[80];

    printf("enter the string 1 :");
    gets(str1);

    printf("enter the string 2 :");
    gets(str2);

    string(str1, str2);

    printf("%s", str1);

    return 0;
}
