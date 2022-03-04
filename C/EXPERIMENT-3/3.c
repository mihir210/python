/*
W.A.P that will display Grade of student according to his/her marks using if else
ladder
Marks > 80 then Grade = A
Marks between 61 & 80 then Grade = B
Marks between 51 & 60 then Grade = C
Marks between 41 & 50 then Grade = D
Marks between 35 & 40 then Grade = E
Marks < 35 then Grade = F
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter your total marks\n");
    scanf("%d", &n);

    if (n > 80)
    {
        printf("your grade is A");
    }
    else if (n >= 61 && n <= 80)
    {
        printf("your grade is B");
    }
    else if (n >= 51 && n <= 60)
    {
        printf("your grade is C");
    }
    else if (n >= 41 && n <= 50)
    {
        printf("your grade is D");
    }
    else if (n >= 35 && n <= 40)
    {
        printf("your grade is E");
    }
    else
    {
        printf("ypur grade is F");
    }

    return 0;
}
