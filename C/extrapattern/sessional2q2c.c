#include<stdio.h>

int main()
{
    int a[100], temp[100], i, j, n, c, num;

    printf("enter the number of element :");
    scanf("%d", &c);

    for(i=0; i<c; i++)
    {
        printf("enter the element [%d] :", i);
        scanf("%d", &a[i]);
    }

    printf("enetr the number :");
    scanf("%d", &n);
    num=n;
    for(i=0; i<c; i++)
    {
        temp[i]=a[i];
        //printf("%d\n", temp[i]);
    }

    for(i=0; i<(c-num); i++)
    {
        a[i]=temp[n++];
    }

    for(j=0; j<num; j++)
    {
        a[i++]=temp[j];
    }


    for(i=0; i<c; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}