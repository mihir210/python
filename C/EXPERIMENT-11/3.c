/*
Addition of two 3X3 matrices using pointers.
*/

#include <stdio.h>
void addmatrix(int a[][8], int b[][8], int c[][8], int x, int y)
{
    int i, j;

    printf("\n addition of matrix \n");
    for (i = 0; i < x; i++)
    {

        for (j = 0; j < y; j++)
        {
            c[i][j] = 0;
            *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
}
int main()
{
    int i, j, a[8][8], b[8][8], c[8][8], *p1, *p2, ra,ca, rb,cb;

    // p1=&a[0][0];
    // p2=&b[0][0];

    printf("enter the matrix A rows and column :");
    scanf("%d %d", &ra, &ca);

    printf("enter the matrix B rows and column :");
    scanf("%d %d", &rb, &cb);

    if (ra==rb && ca==cb)
    {
            printf("enter the matrix 1\n");

        for (i = 0; i < ra; i++)
        {
            for (j = 0; j < ca; j++)
            {
                printf("enter the element of [%d][%d] :", i, j);
                scanf("%d", (*(a + i) + j));
                // scanf("%d", (p1+3*i+j));
            }
        }
        printf("enter the matrix 2\n");

        for (i = 0; i < rb; i++)
        {
            for (j = 0; j < cb; j++)
            {
                printf("enter the element of [%d][%d] :", i , j);
                scanf("%d", (*(b + i) + j));
                // scanf("%d", (p2+3*i+j));
            }
        }

        addmatrix(a, b, c, ra, ca);

        for ( i = 0; i <ra  ; i++)
        {
            for ( j = 0; j < ca; j++)
            {
                printf("%d\t", *(*(c + i) + j));
            }
            printf("\n");
        }
    }
    else
    {
        printf("enter valid data");
    }
    
    
    

    return 0;
}


