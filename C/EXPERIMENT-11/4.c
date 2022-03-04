/*
W.A.P that will find maximum number from the given 1-D array by using the concept of
function returning pointer.
*/

#include <stdio.h>

int *max(int *a, int n)
{
    int i, *maxv, max = 0;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) > max)
        {
            max = *(a + i);
        }
    }
    
    maxv=&max;
    return maxv;
}

int main()
{
    int i, a[60], n, *max_value;

    printf("enter the size of array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the number %d :", i + 1);
        scanf("%d", (a + i));
    }

    max_value = max(a, n);

    printf("maximum number is %d", *max_value);
    return 0;
}
