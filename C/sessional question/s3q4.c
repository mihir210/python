/* WAP using function and pointer which copies last n characters of String 1 at the end
of String 2. Also convert lower-case letter to upper-case and upper-case letter to lower-case letter
while copying.
Hint:
Input: -
String 1: DdufoT
String 2: Hello
n=3
output: -
HelloFOt
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char Strncpy(char s_1[], char s_2[], int n)
{
    int i, j, num, len_s1, len_s2, k;
    num = n;

    for (i = 0; *(s_1 + i) != '\0'; i++)
        ;
    len_s1 = i;

    for (j = 0; *(s_2 + j) != '\0'; j++)
        ;
    len_s2 = j;

    for (i = 0; i < n; i++)
    {
        if (isupper(*(s_1 + i + len_s1 - n)))
        {
            *(s_1 + i + len_s1 - n) = tolower(*(s_1 + i + len_s1 - n));

            *(s_2 + j) = *(s_1 + len_s1 - num + i);
        }
        else
        {
            *(s_1 + i + len_s1 - n) = toupper(*(s_1 + i + len_s1 - n));

            *(s_2 + j) = *(s_1 + i + len_s1 - n);
        }
        j++;
    }
    *(s_2 + j) = '\0';
}

int main(int argc, char const *argv[])
{
    int n, j, i;
    char s1[100], s2[100];

    printf("enter the string 1 :");
    scanf("%s", s1);

    printf("enter the string 2 :");
    scanf("%s", s2);

    printf("enter the number you want to copy :");
    scanf("%d", &n);

    Strncpy(s1, s2, n);

    printf("%s", s2);
    return 0;
}
