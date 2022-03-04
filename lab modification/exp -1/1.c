/*W.A.P to convert the temperature unit from Fahrenheit to Celsius using the formula
C = (F – 32) / 1.8.
*/



// #include <stdio.h>
// #include <stdlib.h>
#include "myh.h"

void printline()
{
    int i;
    printf("\n");
    for (i = 0; i < 90; i++)
    {
        printf("=");
    }
    printf("\n");
}
static int j = 0;
int a[1000];
int c;

void create()
{
    FILE *p1, *p2, *p3;
    float ft, ct;

    p1 = fopen("1.txt", "a+");
    p2 = fopen("count.txt", "w+");
    fscanf(p2, "%d", &j);
    p3 = fopen("count2.txt", "a+");

    printf("\n1. fahrenheat to calsius \n2.calsius to fahrenheat ");
    scanf("%d", &c);

    if (c == 1)
    {

        printf("Enter the temperature in fahrenheit\n");
        scanf("%f", &ft);
        fprintf(p1, "%f\n", ft);
        fclose(p1);
        a[j] = 1;
        fprintf(p3, "%d\n", a[j]);
    }
    else if (c == 2)
    {

        printf("Enter the temperature in calsius\n");
        scanf("%f", &ct);
        fprintf(p1, "%f\n", ct);
        fclose(p1);
        a[j] = 2;
        fprintf(p3, "%d\n", a[j]);
    }
    j++;
    fprintf(p2, "%d", j);
    fclose(p2);
    fclose(p3);
}

void read()
{
    FILE *p1, *p2, *p3;
    float ft, ct;
    int i, k;

    p1 = fopen("count.txt", "r");
    fscanf(p1, "%d", &j);
    fclose(p1);
    if (j == 0)
    {
        printf("record not found");
        printline();
    }
    else
    {

        p3 = fopen("count2.txt", "r");
        p2 = fopen("1.txt", "r");

        for (i = 0; i < j; i++)
        {
            fscanf(p3, "%d", &a[i]);
            if (a[i] == 1)
            {
                fscanf(p2, "%f", &ft);
                ct = (ft - 32) / 1.8;
                printf("\nentered TF= %f\tans =TC=%f", ft, ct);
            }
            else if (a[i] == 2)
            {
                fscanf(p2, "%f", &ct);
                ft = ct * 1.8 + 32;
                printf("\nentered TC= %f\tans = TF=%f", ct, ft);
            }

            printline();
        }

        fclose(p2);
        fclose(p3);
    }
}
int main()
{
    FILE *p1, *p2, *p3;
    float ft, ct;
    int n;

    do
    {
        printf("\n1.create");
        printf("\n2.read");
        printf("\n3.clear all data.");
        printf("\n0.exit\n :");

        scanf("%d", &n);
        printline();
        switch (n)
        {
        case 1:
        {
            create();

            break;
        }
        case 2:
        {
            read();
            break;
        }
        case 3:
        {
            p1 = fopen("1.txt", "w");
            p1 = NULL;
            fclose(p1);
            p2 = fopen("count.txt", "w");
            fprintf(p2, "0");
            fclose(p2);
            p3 = fopen("count2.txt", "w");
            p3 = NULL;
            fclose(p3);
        }
        }
    } while (n != 0);

    return 0;
}
