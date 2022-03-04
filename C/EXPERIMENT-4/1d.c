/*
    1
   22
  333
 4444
55555
*/

#include <stdio.h>

int main()
{
    int i, j, k, lines;

    printf("Enter the number of lines");
    scanf("%d", &lines);

    for (i = 1; i <= lines; i++)
    {
        for (k = lines - i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
