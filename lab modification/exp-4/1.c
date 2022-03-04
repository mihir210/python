/*
W.A.P which prepare calculator using switch case.4
*/

#include <stdio.h>
#include <stdlib.h>

static int j = 0;

void printline()
{
    int i;
    for (i = 0; i < 90; i++)
    {
        printf("=");
    }
}

void create()
{
    float a, b;
    char d;
    FILE *p1, *p2, *p3, *p4;

    p4 = fopen("count.txt", "w+");
    fscanf(p4, "%d", &j);

    p1 = fopen("a.txt", "a+");
    printf("\nEnter the value of a :");
    scanf("%f", &a);
    fprintf(p1, "%f\n", a);
    fclose(p1);

    p2 = fopen("b.txt", "a+");
    printf("\nEnter the value of b :");
    scanf("%f", &b);
    fprintf(p2, "%f\n", b);
    fclose(p2);

    p3 = fopen("o.txt", "a+");
    printf("\ngive the operaters :");
    scanf(" %c", &d); // one space add before %c because space is charactor
    fprintf(p3, "%c\n", d);
    fclose(p3);

    j++;
    fprintf(p4, "%d", j);
    fclose(p4);
}

void read()
{
    char d;
    float a, b;
    int i;
    FILE *p1, *p2, *p3, *p4;

    p4 = fopen("count.txt", "r");
    fscanf(p4, "%d", &j);

    if(j==0)
    {
        printf("\nno record found.\n");
    }
    else
    {        
        p1 = fopen("a.txt", "r");
        p2 = fopen("b.txt", "r");
        p3 = fopen("o.txt", "r");

        for (i = 0; i < j; i++)
        {
            fscanf(p1, "%f", &a);
            fscanf(p2, "%f", &b);
            fscanf(p3, " %c", &d);
            switch (d)
            {

            case '+':
            {
                printf("\n%f + %f = %f\n", a, b, a + b);
            }
            break;

            case '-':
            {
                printf("\n%f - %f = %f\n", a, b, a - b);
            }
            break;

            case '*':
            {
                printf("\n%f * %f = %f\n", a, b, a * b);
            }
            break;

            case '/':
            {
                printf("\n%f / %f = %f\n", a, b, a / b);
            }
            break;

            default:
            {
                printf("\nERROR\n");
            }
            break;
            }

            printline();
        }
    fclose(p1);
    fclose(p2);
    fclose(p3);
    }
}
int main()
{

    int n;
    FILE *a, *b, *c, *d;
    do
    {
        printf("\n1.create\n2.read\n3.clear all record\n0.exit\n :");
        scanf("%d", &n);
        printline();

        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            read();
            break;

        case 3:
        {
            a = fopen("a.txt", "w");
            a = NULL;
            fclose(a);
            b = fopen("b.txt", "w");
            b = NULL;
            fclose(b);
            c = fopen("o.txt", "w");
            c = NULL;
            fclose(c);

            d = fopen("count.txt", "w");
            fprintf(d, "0");
            fclose(d);
        }
        }
    } while (n != 0);

    return 0;
}
