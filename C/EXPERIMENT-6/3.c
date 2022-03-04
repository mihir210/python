/*
W.A.P which searches for the pattern (sub string) in the subject string (main string) and
returns the position/index of the start of the string where match is found
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, pos;
    char str[100], substr[100];

    printf("Enter the string :");
    gets(str);

    printf("Enter the substring :");
    gets(substr);

    while (str[i] != substr[j] && str[i] != '\0')
        i++;
    if (str[i] == '\0')
    {
        printf("substing not found");
        exit(0);
    }
    pos = i;

    while (substr[j] != '\0')
    {
        if (str[i] == substr[j])
        {
            i++;
            j++;
        }
        else
        {
            printf("sub string are not match");
            exit(0);
        }
    }
    printf("substring starts at %d index", pos);

    /*strstr(str, substr);

    if ( strstr(str, substr)=='\0')
    {
        printf("by");
    }
    else
    {
        printf("hello");
    }*/

    return 0;
}
