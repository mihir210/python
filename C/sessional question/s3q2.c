/*
Using Pointer, find out the Minimum and Maximum number from the given 1-D array without
sorting the array. Also swap position of Minimum and Maximum number.
Hint:
Input: - 11 34 55 22 9 7 44 50
Output: -
Max=55
Min=7
11 34 7 22 9 55 44 50

*/

#include <stdio.h>

int main()
{
    int a[10], i, j, n, max = 0, max_pos, min = 0, min_pos, temp;

    printf("enter the number of array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("[%d] :", i + 1);
        scanf("%d", (a + i));
    }
    max = *a;
    min = *a;
    for (i = 1; i < n; i++)
    {
        if (*(a + i) > max)
        {
            max = *(a + i);
            max_pos = i;
        }
        if (*(a + i) < min)
        {
            min = *(a + i);
            min_pos = i;
        }
    }

    printf("max= %d\n min = %d\n", max, min);

    temp = *(a + min_pos);
    *(a + min_pos) = *(a + max_pos);
    *(a + max_pos) = temp;

    for (i = 0; i < n; i++)
    {
        printf("%d  ", *(a + i));
    }

    return 0;
}
