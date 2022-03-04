/*
W.A.P which prepare calculator using switch case.4
*/

#include <stdio.h>

#include "myhead.h"

int main()
{
    float a, b, c;
    char d;

    printf("Enter the value of a :");
    scanf("%f", &a);

    printf("\nEnter the value of b :");
    scanf("%f", &b);

l1:
    printf("\ngive the operaters :");
    scanf(" %c", &d); // one space add before %c because space is charactor

    switch (d)
    {
    case '+':
    {
        // c = a + b;
        // printf("%f + %f = %f", a, b, c);

        printf("%d", add(a, b));
    }
    break;

    case '-':
    {
        c = a - b;
        printf("%f - %f = %f", a, b, c);
    }
    break;

    case '*':
    {
        c = a * b;
        printf("%f * %f = %f", a, b, c);
    }
    break;

    case '/':
    {
        c = a / b;
        printf("%f / %f = %f", a, b, c);
    }
    break;

    default:
    {
        printf("ERROR");
    }
        goto l1;
        break;
    }

    return 0;
}
