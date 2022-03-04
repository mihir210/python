/*
Read and display the members of Union ( Take book details-ISBN no , Title, Price)
*/

#include <stdio.h>
#include <string.h>

union books
{
    int id;
    char title[10];
    int price;

} book[10];

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
    int i, n, id[10];
    char title[10][10];

    printf("how many books have :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nenter the id of book %d :", i + 1);
        scanf("%d", &book[i].id);
        id[i] = book[i].id;

        printf("\nenter the title for book  %d :", i + 1);
        scanf("%s", book[i].title);
        strcpy(title[i], book[i].title);

        printf("\nenter the price of book %d :\n", i + 1);
        scanf("%d", &book[i].price);

        printline();
    }

    for (i = 0; i < n; i++)
    {
        printf("\nthe id of book %d is %d\n", i + 1, id[i]);
        printf(" the title for book  %d is %s\n", i + 1, title[i]);
        printf(" the price of book %d is %d\n", i + 1, book[i].price);
        printf("--------------------------------------------------");
    }

    return 0;
}
