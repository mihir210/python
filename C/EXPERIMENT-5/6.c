/*
W.A.P which delete particular element enter by user.
*/

#include <stdio.h>

int main()
{
    int i, p, j, k, n[100], c = 0;

    printf("enter the number you want and number should be less then 100");
    scanf("%d", &p);

    for (i = 0; i < p; i++)
    {
        printf("enter the element of index[%d] :", i);
        scanf("%d", &n[i]);
    }

    printf("which number you want to delete : ");
    scanf("%d", &k);

    for (i = 0; i < p; i++)
    {
        if (n[i] == k)
        {
            for (j = i; j < p; j++)
            {
                n[j] = n[j + 1];
            }
            c++;
            i--;
        }
    }

    printf("\nnew array\n");

    for (i = 0; i < p - c; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}
