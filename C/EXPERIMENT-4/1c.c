/*
      *
     * *
    * * *
   * * * *
  * * * * *
 */

#include <stdio.h>

int main()
{
    int i, j, k, lines;

    printf("enter the number of lines\n");
    scanf("%d", &lines);

    for (i = 1; i <= lines; i++)
    {
        for (k = lines - i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= lines; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = lines; j - i > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
