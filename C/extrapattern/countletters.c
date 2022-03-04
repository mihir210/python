#include <stdio.h>

void main()
{
    char c;
    int tab, line, blank, up, low;
    tab = line = blank = up = low = 0;
    c = ' ';

    while (c != '*')
    {
        c = getchar();
        if (c >= 65 && c <= 90)
        {
            up++;
        }
        if (c >= 97 && c <= 122)
        {
            low++;
        }
        if (c == '\t')
        {
            tab++;
        }
        if (c == '\n')
        {
            line++;
        }
        if (c == ' ')
        {
            blank++;
        }
    }
    printf("%d %d %d,up=%d,low=%d", tab, line, blank, up, low);
}