/*
Multiplication of two 3X3 matrices.
*/

#include <stdio.h>

int main()
{
    int i, j, k, a[3][3], b[3][3], c[3][3];

    printf("enter your 3x3 matrix 1 : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("element of matrix 1 is [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter your 3x3 matrix 2 : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("element of martix 2 is [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        printf("\n");
    }

    printf("\n matrix is \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
