/*
Create a structure containing information of products viz, id, name, price etc. Implement
search function on basis of id of product and displays its respective name and price.
*/

#include <stdio.h>
#include <string.h>

struct product
{
    int price;
    char name[80];
    int id;
} p[10], p2;

void printline()
{
    int i;
    for (i = 0; i < 90; i++)
    {
        printf("=");
    }
}

/*void searchbyid(struct product p1[], int x, int y)
{
    int i;
    for (i = 0; i < y; i++)
    {
        if (x == p1[i].id)
        {
            printline();
            printf("\nyour product is [%s] and its prize is ₹=%d/- only.\n", p1[i].name, p1[i].price);
            printline();
        }
    }
}*/

struct product searchbyid(struct product p1[], int x, int y)
{
    int i;
    struct product temp =
    {
        0,
        "N / A",
        -1
    };

    for (i = 0; i < y; i++)
    {
        if (x == p1[i].id)
        {
            return p1[i];
        }
    }
    return temp;
}

int main()
{
    int i, j, n, c;
    char temp;

    // for scan the product value
    printf("how many products you have :");
    scanf("%d", &n);

    // for loop for scan prize and id
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

    printf("\nenter the id you want to search : \n");
    scanf("%d", &c);

    // searchbyid(p, c, n);

    p2 = searchbyid(p, c, n);

    if (p2.id != -1)
    {
        printf("\nyour product is [%s] and its prize is ₹=%d/- only.\n", p2.name, p2.price);
    }
    else
    {
        printf("not found");
    }

    return 0;
}
