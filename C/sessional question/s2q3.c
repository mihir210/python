/*
Write a C program to check whether given matrix is symmetric or not
*/

#include <stdio.h>

int main()
{
    int a[10][10], n, j, i, r, c, flag = 1;

    printf("enter the size of raws and columan in square matrix :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("[%d][%d]", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("given matrix is symmetric");
    }
    else
        printf("given matrix is not symmetric");

    return 0;
}
