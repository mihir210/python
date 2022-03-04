/*
Assume that 1 month = 30days and 1 year = 360 days.
Get total days as an input and Find out the number of Years, Months & Days.
Example1:
Input:
905
*/



#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int i,j,n, year, t1, m, d;

    printf("enter the number of days :");
    scanf("%d", &n);

    year= n / 360;
    t1 = n % 360;
    m = t1 / 30;
    d = t1 % 30;


    printf("%d years  %d months %d days", year, m, d);
    return 0;
}
