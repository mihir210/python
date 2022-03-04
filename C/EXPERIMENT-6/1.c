/*W.A.P that will read two strings.
If given two strings are same then print “Given strings are same”.
If given two strings are not same then print “Given strings are not same”
. (without using strcmp() function)
*/

#include <stdio.h>

int main()
{
    int flag = 0, i;
    char str1[80], str2[80];

    printf("Enter the string 1 :");
    gets(str1);

    printf("Enter the string 2 :");
    gets(str2);

    i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("Given strings are not same.");
    }
    else
    {
        printf("Given strings are same");
    }

    return 0;
}