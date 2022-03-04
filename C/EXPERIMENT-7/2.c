/*
Write a function to calculate and display the total amount, take value for principle
amount p, rate of interest r and period n from user. Find out the Total_amount using the
equation Total_amount = Total_amount * (1+ r) (for number of period n, initialize
Total_amount with p)
*/

#include <stdio.h>

void intrest(float x, float y, float z)
{
    float t = x, n;

    for (n = 1; n <= z; n++)
    {
        t = t * (1 + y / 100);
    }
    printf("total amount with intrest is %f", t);
}

int main()
{
    float p, r, n;
    void intrest(float, float, float);

    printf("Enter the total principal amount: ");
    scanf("%f", &p);

    printf("\nEnter the intrest rate: ");
    scanf("%f", &r);

    printf("\nEnter the number of years: ");
    scanf("%f", &n);

    intrest(p, r, n);

    return 0;
}
