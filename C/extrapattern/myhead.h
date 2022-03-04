#include <stdio.h>
#include <stdlib.h>


int add(int a, int b)
{
    return a + b;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int 