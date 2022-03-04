/*
W.A.P that computes and prints the Factorial of a given number.
*/

#include <stdio.h>

int main()
{
    int i, fact, ans = 1;

    printf("Enter the value of factorial\n");
    scanf("%d", &fact);

    for (i = fact; i >= 1; i--)
    {
        ans = ans * i;
    }
    printf("%d", ans);

        return 0;
}
