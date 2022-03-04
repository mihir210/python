#include<stdio.h>
#include <stdlib.h>


#include "myhead.h"

int main()
{
    int a,b;

    scanf("%d %d", &a, &b);

    printf("%d  %d ", a, b);

    swap(&a,&b);

    printf("%d    %d", a,b);
    exit(0);
    
}