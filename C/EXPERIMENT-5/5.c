/*
 W.A.P which insert element at particular index enter by user.
 */

#include <stdio.h>

int main()
{
    int j, i, n[100], ele, pos, c, k;

    printf("enter the number you want and number should be less then 100");
    scanf("%d", &j);

    for (i = 0; i < j; i++)
    {
        printf("enter the element of index[%d] :", i);
        scanf("%d", &n[i]);
    }

    printf("enter the element you want to insert : ");
    scanf("%d", &ele);

    printf("\nenter the position : ");
    scanf("%d", &pos);

    for (c = j; c > pos; c--)
    {
        n[c] = n[c - 1];
    }

    n[pos] = ele;

    printf("\n new array\n");

    for (k = 0; k <= j; k++)
    {
        printf("element of index[%d] : %d\n", k, n[k]);
    }

    return 0;
}
