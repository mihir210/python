/*
Find out sum and average of N numbers using array.
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, n[10], sum = 0;
    float avg;

    printf("enter the number of element you want :");
    scanf("%d", &j);

    for (i = 0; i < j; i++)
    {
        printf("enter the element of index[%d] : ", i);
        scanf("%d", &n[i]);

        sum = sum + n[i];
    }

    printf("sum of numbers is %d. \n", sum);

    avg = (float)sum / j;

    printf("average of numbers is %f", avg);

    return 0;
}
