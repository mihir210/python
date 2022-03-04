/*
Implement sorting of n numbers in ascending order using function (pass array as argument
to the function)
*/

#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (a[j - 1] > a[j])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[40], n, i;

    printf("enter the size :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the element of index [%d] :", i);
        scanf("%d", &a[i]);
    }

    sort(a, n);

    printf("\n Assending order \n");
    for (i = 0; i < n; i++)
    {
        printf("element of index [%d] is : %d\n", i, a[i]);
    }
    return 0;
}
