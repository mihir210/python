/*
Prepare calculator by using concept of function. Create separate functions for addition,
subtraction, multiplication and division.
*/

#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}
float mul(float a, float b)
{
    return a * b;
}
float sub(float a, float b)
{
    return a - b;
}
float div(float a, float b)
{
    if (b == 0)
        return 0;
    return a / b;
}

int main()
{
    float x, y, z;
    char d;

    printf("enter the two numbers : ");
    scanf("%f %f", &x, &y);

    printf("%f + %f =%4.3f \n", x, y, add(x, y));

    printf("%f - %f=%f \n", x, y, sub(x, y));

    printf("%f * %f=%f \n", x, y, mul(x, y));

    printf("%f / %f=%f \n", x, y, div(x, y));

    return 0;
}
