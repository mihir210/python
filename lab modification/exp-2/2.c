/*Assume that any month is of 30 days. Now you are given total days. Find out the exact
number of Years, Months & Days.
*/


#include <stdio.h>
#include <stdlib.h>

static int j=0;

void create()
{
    int n;
    FILE *p1, *p2;
    p2 = fopen("2c.txt", "w+");
    fscanf(p2, "%d", &j);

    p1 = fopen("2.txt", "a+");
    printf("Enter the totel number of days\n");
    scanf("%d", &n);
    fprintf(p1, "%d\n", n);
    fclose(p1);
    
    j++;
    fprintf(p2, "%d", j);
    fclose(p2);
}

void days()
{

    int y, m, d, t1, n, i, a;
    FILE *p1, *p2, *p3;
        p1=fopen("2.txt", "r");
        p2 = fopen("2c.txt", "r");
        fscanf(p2, "%d", &j);
        fclose(p2);
        p3 = fopen("2.txt", "r");
        for (i = 1; i <= j; i++)
        {
            fscanf(p1, "%d", &n);

            fscanf(p3, "%d", &a);

            y = n / 360;
            t1 = n % 360;
            m = t1 / 30;
            d = t1 % 30;

            printf("total days =%d\t\tYEAR:%d\tMONTHS:%d\tDAYS:%d\n", a, y, m, d);
        }
        fclose(p3);
        fclose(p1);

}

int main()
{

    FILE *p1, *p2;
    float ft, ct;
    int n, c;

    do
    {
        printf("\n1.create");
        printf("\n2.read");
        printf("\n3.delete all record ");
        printf("\n0.exit :\n");

        scanf("%d", &n);

        switch (n)
        {
        case 1:
            create();
            break;

        case 2:
            days();
            break;
        case 3:
        {
            p1 = fopen("2.txt", "w");
            p1 = NULL;
            fclose(p1);
            p2 = fopen("2c.txt", "w");
            fprintf(p2, "0");
            fclose(p2);
        }
        }

    } while (n != 0);

    return 0;
}
