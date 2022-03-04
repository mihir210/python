/*
WAP to check the given nxn matrix is symmetric or not using pointer.
*/

#include <stdio.h>

void symmetric(int a[][10], int n)
{
    int i, j, flag = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*(*(a + i) + j) != *(*(a + j) + i))
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("given matrix is symmetric.");
    else
        printf("given matrix is not symmetric.");
}

int main()
{
    int n, a[10][10], i, j;

    printf("enter the mxm matrix size :");
    scanf("%d", &n);

    printf("enter the matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (*(a + i) + j));
        }
    }

    symmetric(a, n);

    return 0;
}
