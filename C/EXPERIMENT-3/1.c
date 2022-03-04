/*W.A.P to determine whether input number is ODD or EVEN. Display appropriate
message
 */

#include <stdio.h>

int main()
{
    int n;

    printf("enter the number :");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("\nthis number is even. \n");
    }
    else
    {
        printf("\nthis number is odd.");
    }

    return 0;
}
