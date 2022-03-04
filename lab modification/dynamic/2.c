/*
Write a C program that shifts each element of an array to the left side by N positions.
Example:
Input :
1 2 3 4 5 6 7 8 9 10 and N=4
Output:
5 6 7 8 9 10 1 2 3 4

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, *temp, n, i, j, sh, num;

    printf("enter the size :");
    scanf("%d", &n);

    a = (int *)calloc(n, sizeof(int));
    temp = (int *)calloc(n, sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("[%d] :", i + 1);
        scanf("%d", &a[i]);
    }

    printf("enter the shifting number :");
    scanf("%d", &sh);
    num = sh;

    for (i = 0; i < n; i++)
    {
        temp[i] = a[i];
    }

    for (i = 0; i < (n - num); i++)
    {
        a[i] = temp[sh++];
    }

    for (j = 0; j < num; j++)
    {
        a[i++] = temp[j];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
