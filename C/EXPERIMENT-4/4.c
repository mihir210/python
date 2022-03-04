/*
W.A.P to count Blanks, Tabs and Newlines using while and getchar.
*/

#include <stdio.h>

int main()
{
    int b_count = 0, t_count = 0, n_count = 0, o_count = 0;
    char inc;

    printf("Enter the characters for test : ");

    while (inc = getchar())
    {
        if (inc != 'x')
        {
            if (inc == ' ')
                b_count++;
            else if (inc == '\t')
                t_count++;
            else if (inc == '\n')
                n_count++;
            else
                o_count++;
        }
        else
            break;
    }

    printf("Blanks : %d\n", b_count);
    printf("Tabs : %d\n", t_count);
    printf("New Lines : %d\n", n_count);
    printf("other chars : %d\n", o_count);

    return 0;
}
