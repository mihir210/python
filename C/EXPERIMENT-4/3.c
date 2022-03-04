/*
W.A.P that computes and prints the Fibonacci series.
*/

#include <stdio.h>

int main()
{
    int ft = 0, st = 1, ans, nos;

    // 0 1 1 2 3 5 8 13  ......
    printf("enter the term number :");
    scanf("%d", &nos);
    printf("%d %d", ft, st);

    nos = nos - 2;

    while (nos > 0)
    {
        ans = ft + st;

        printf(" %d", ans);
        nos--;
        ft = st;
        st = ans;
    }

    return 0;
}
