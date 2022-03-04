/*
 Take marks as an input .
Print the grade based on the input marks using switch case as per following criteria.
90-100 A
70-89 B
50-69 C
0-49 D
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter your marks :");
    scanf("%d", &n);

    switch (n / 10)
    {
    case 10:
    case 9:
        printf("A");
        break;

    case 8:
    case 7:
        printf("B");
        break;

    case 6:
    case 5:
        printf("C");
        break;

    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("D");
        break;
    default:
        printf("enter valid marks :");
        break;
    }

    return 0;
}
