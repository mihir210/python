#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

int main()
{
    int *ptr;
    int n, i;

    printf("enter the  number of array : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        *(ptr + i) = rand() % n;
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d] === %d\n", i + 1, ptr[i]);
    }

    return 0;
}
