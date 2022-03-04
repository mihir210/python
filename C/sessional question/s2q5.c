/*
Write a user defined functions to perform the following task:
1) Read the string
2) Delete a character enter by user from string.
3) Print the resultant string.
*/

#include <stdio.h>

void read(char s1[])
{
    printf("enter the string :");
    gets(s1);
}

void delete_ch(char s2[])
{
    int i, j, len;
    char k;
    for (i = 0; s2[i] != '\0'; i++)
        ;
    len = i;

    printf("which character you want to delete : ");
    scanf("%c", &k);

    for (i = 0; i <= len; i++)
    {
        if (s2[i] == k)
        {
            for (j = i; j < len; j++)
            {
                s2[j] = s2[j + 1];
            }
            i--;
        }
    }
}

void print(char s2[])
{
    printf("new string %s", s2);
}

int main()
{
    char str[100];

    read(str);

    delete_ch(str);

    print(str);
    return 0;
}
