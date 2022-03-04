/*
Create a structure containing information of products viz, id, name, price etc. Implement
search function on basis of id of product and displays its respective name and price.
3) Modify above program and sort product details according to name(alphabetically order)
*/

#include <stdio.h>
#include <string.h>

struct product
{
    int price;
    char name[80];
    int id;
} p[10], t[10];

void printline()
{
    int i;
    for (i = 0; i < 90; i++)
    {
        printf("=");
    }
}

int main()
{
    int i, j, n, c;
    char temp;

    printf("how many products you have :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%c", &temp);
        printf("\nenter the name of the product %d :\n", i + 1);
        gets(p[i].name);

        printf("\nenter the prize of product %d :\n", i + 1);
        scanf("%d", &p[i].price);

        printf("\nenter the id of product %d :\n", i + 1);
        scanf("%d", &p[i].id);

        printline();
    }

    for (j = 1; j < n; j++)
    {
        if (strcmp(p[j - 1].name, p[j].name) > 0)
        {
            t[j - 1] = p[j - 1];
            p[j - 1] = p[j];
            p[j] = t[j - 1];
        }
    }

    printf("\nassending order.\n");
    for (i = 0; i < n; i++)
    {

        printf("\nproduct [%s] and its prize is ₹-%d/-. \n", p[i].name, p[i].price);
        printline();
    }

    return 0;
}
