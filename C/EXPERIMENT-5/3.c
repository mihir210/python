/*
Write a program which Sorts all the elements of 1-D Array.
*/

#include <stdio.h>

int main()
{
    int i, j, n[100], c, temp;

    printf("Enter the number of element you want : ");
    scanf("%d", &c);

    for (i = 0; i < c; i++)
    {
        printf("enter the element of index [%d] :", i);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < c; i++)
    {
        for (j = 1; j < c; j++)
        {
            if (n[j - 1] > n[j])
            {
                temp = n[j - 1];
                n[j - 1] = n[j];
                n[j] = temp;
            }
        }
    }

    printf("\n assending order\n");
    for (i = 0; i < c; i++)
    {
        printf("index [%d] : %d\n", i, n[i]);
    }

    printf("\n decending order\n");
    for (i = c - 1; i >= 0; i--)
    {
        printf("index [%d] : %d\n", i, n[i]);
    }

    return 0;
}
