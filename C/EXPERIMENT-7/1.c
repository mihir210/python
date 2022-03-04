/*
Printline() which prints ‘=’ sign 81 times in the same line
*/

#include <stdio.h>

void printline(int x)
{
    int i;

    for (i = 0; i < x; i++)
    {
        printf("=");
    }
}

int main()
{
    int i;

    printf("enter the number for print :");
    scanf("%d", &i);

    printline(i);

    return 0;
}


