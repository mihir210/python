/*
Create a structure item with three members name, price and quantity. Read information of
one item. After reading information of one item update price and quantity of that item by
calling update function with necessary arguments. Finally print updated value of item.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item
{
    char name[80];
    int prize;
    int que;
    int total;
} m[10];

void printline()
{
    int i;
    for (i = 0; i < 90; i++)
    {
        printf("=");
    }
}

struct item update(struct item a[], int c)
{

    int i, j;

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < a[i].que; j++)
        {
            a[i].total += a[i].prize;
        }
    }
}

int main()
{
    int n, i, j, p, flag = 0, new;
    char name_pro[80];

    printf("how many product have :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nenter the name of %d product :\n", i + 1);
        scanf("%s", m[i].name);
        printf("\nenter the prize of product %d:\n", i + 1);
        scanf("%d", &m[i].prize);

        printf("enter the quantity of product %d :", i + 1);
        scanf("%d", &m[i].que);
        printline();
    }

    printf("\nyou want to update information : \n 1 for yes \n 2 for no\n");
    scanf("%d", &p);

    if (p == 1)
    {
        printf("\nenter the product name :\n");
        scanf("%s", name_pro);
        for (i = 0; i < n; i++)
        {
            if (strcmp(name_pro, m[i].name) == 0)
            {
                flag = 1;
                new = i;
                break;
            }
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m[i].que; j++)
            {
                m[i].total += m[i].prize;
            }
        }

        for (i = 0; i < n; i++)
        {
            printline();
            printf("\nproduct [%s]  price = %d  quantity =%d total price %d \n", m[i].name, m[i].prize, m[i].que, m[i].total);
            printline();
        }
        exit(0);
    }

    if (flag == 1)
    {
        printf("\nenter the quantity of product [%s] :\n", m[new].name);
        scanf("%d", &m[new].que);
        printf("\nnew prize of the product [%s] :\n", m[new].name);
        scanf("%d", &m[new].prize);

        // update(m[new].prize, m[new].que, m[new].name, m, n);
        update(m, n);

        for (i = 0; i < n; i++)
        {
            printline();
            printf("\nproduct [%s]  price = %d  quantity =%d total price %d \n", m[i].name, m[i].prize, m[i].que, m[i].total);
            printline();
        }
    }

    return 0;
}
