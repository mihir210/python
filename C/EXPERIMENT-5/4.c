/*
Find out the Minimum and Maximum number from the given 1-D array without sorting
the array. Also swap position of Minimum and Maximum number
*/

#include <stdio.h>

int main()
{
    int i, j, n[100], max, min, k, max_pos = 0, min_pos = 0, c;

    printf("enter the number you want and number should be less then 100");
    scanf("%d", &j);

    for (i = 0; i < j; i++)
    {
        printf("enter the element of index[%d] :", i);
        scanf("%d", &n[i]);
    }

    max = n[0];
    min = n[0];

    for (k = 1; k < j; k++)
    {
        if (n[k] > max)
        {
            max = n[k];
            max_pos = k;
        }
        if (n[k] < min)
        {
            min = n[k];
            min_pos = k;
        }
    }

    printf("maximum value is %d at %d position.\n", max, max_pos);

    printf("minimum value is %d at %d position.", min, min_pos);

    c = n[min_pos];
    n[min_pos] = n[max_pos];
    n[max_pos] = c;

    printf("\n new array after swapping \n");

    for (i = 0; i < j; i++)
    {
        printf("enter the element of index[%d] : %d\n", i, n[i]);
    }

    return 0;
}
