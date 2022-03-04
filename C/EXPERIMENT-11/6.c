/*
WAP to store data for n number of student (i.e. student name, id and percentage) and
display the detail of a student who got the highest percentage. Implement the program
using the concept of pointers and structures.
*/

#include <stdio.h>
struct student
{
    char name[20];
    int id;
    float percentage;
} *stud, st[100], *max;

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

struct student *maxper(struct student s1[], int n)
{
    int i, pos;
    float max = 0.0;

    for (i = 0; i < n; i++)
    {
        if ((s1 + i)->percentage > max)
        {
            max = (s1 + i)->percentage;
            pos = i;
        }
    }

    return (s1+pos);
    
}

int main()
{
    int n, i;

    printf("enter the number of student :");
    scanf("%d", &n);

    printline();

    stud=st;
    for (i = 0; i < n; i++)
    {
        printf("enter the name of %d student :", i + 1);
        scanf("%s", (stud+i)->name);

        printf("enter the id of %d student : ", i + 1);
        scanf("%d", &(stud + i)->id);

        printf("enter the percentage of %d student :", i + 1);
        scanf("%f", &(stud+i)->percentage);

        printline();
    }
    max = maxper(stud, n);

    printline();
    printf("\n%s student got the heighest percentage .\n", max->name);
    printf("student details :");
    printf("\n%d id number and %f percentage .\n", max->id, max->percentage);
    printline();


    return 0;
}
