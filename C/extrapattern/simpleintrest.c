#include <stdio.h>

int main()
{
    float I, P, R, N, T;

    printf("Enter the total principal amount: ");
    scanf("%f", &P);

    printf("\nEnter the intrest rate: ");
    scanf("%f", &R);

    printf("\nEnter the number of years: ");
    scanf("%f", &N);

    I = P * R * N / 100;
    T = P + I;

    printf("\n interest amount : %f", I);

    printf("\n total amount: %f", T);

    return 0;
}
