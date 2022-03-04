/*
Store information of 10 persons. Information includes name and age. But criteria is for
the child (age<=18) display age in form of full birth date(dd-mm-yyyy), for an adult the
age should be in years only(Current year-Birth year), while for aged person(age>60)
display message “old person”.
*/

#include <stdio.h>
#include <string.h>

struct birthdate
{
    int day;
    int month;
    int year;
};

struct person
{

    char name[20];
    struct birthdate bdate;
    union age
    {
        struct birthdate minor;
        int adult_age;
        char old[15];

    } are_var;

} p[10];

int main()
{
    //  FILE *p1;
    // p1=fopen("file.txt", "w+");
    int i, n;

    printf("enter the number of person :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nenter the name of person %d :", i + 1);
        scanf("%s", p[i].name);
        printf("\nenter the birthdate of person %d in dd/mm/yyyy :", i + 1);
        scanf("%d %d %d", &p[i].bdate.day, &p[i].bdate.month, &p[i].bdate.year);
    }

    for (i = 0; i < n; i++)
    {
        if ((2022 - p[i].bdate.year) <= 18)
        {
            p[i].are_var.minor = p[i].bdate;
            printf("%s person birthdate is %d-%d-%d\n", p[i].name, p[i].are_var.minor.day, p[i].are_var.minor.month, p[i].are_var.minor.year);
        }
        else if ((2022 - p[i].bdate.year) > 60)
        {
            strcpy(p[i].are_var.old, "old person");
            printf("%s person is %s\n", p[i].name, p[i].are_var.old);
        }
        else
        {
            p[i].are_var.adult_age = (2022 - p[i].bdate.year);
            printf("%s person age is %d", p[i].name, p[i].are_var.adult_age);
        }
    }

    fclose(p1);

    return 0;
}
