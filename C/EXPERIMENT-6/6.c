/*
W.A.P for sorting of strings.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, n;
    char str[20][80], temp[20][80], l;

    printf("enter the number of string : ");
    scanf("%d", &n);

    scanf("%c", &l);

    for (i = 0; i < n; i++)
    {
        printf("enter the string %d :", i + 1);
        gets(str[i]);
    }

    for (i = 0; i < n; i++)
    {

        for (j = 1; j < n; j++)
        {
            if (strcmp(str[j-1], str[j]) > 0)
            {
                strcpy(temp[j - 1], str[j-1]);
                strcpy(str[j-1], str[j]);
                strcpy(str[j], temp[j - 1]);
            }
        }
    }

    for (i = 0; i<n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
