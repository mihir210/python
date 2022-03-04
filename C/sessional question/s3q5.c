/*
Create a structure named student having union named result inside it with other necessary
details. Here, result is a union having marks of JEE or NEET. Design following User Defined
functions for given scenario. Also define the associated main function for printing results inside
it.
1) User Defined Function named GetStudentInfo to store the user inputs inside structure
variable.
2) User defined function to return the details of students who got the highest marks in JEE exam.
3) User defined function to return number of students who appeared in NEET exam from given
user inputs.
Hint:
struct student
{
Other necessary structure members
union result
 {
 int JEE;
 int NEET;
}marks;
};
*/

#include <stdio.h>
#include<stdlib.h>

struct student
{
    char name[100];

    union result
    {
        int JEE;
        int NEET;
    } marks;
    int temp;
} *stu;

void printline()
{
    int i;
    printf("\n");
    for (i = 0; i < 60; i++)
    {
        printf("=");
    }
    printf("\n");
}
void getstudent(struct student stud[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("enter the name of student %d", i + 1);
        scanf("%s", stud[i].name);

        printf("1.for JEE\n 2. for NEET \n");
        scanf("%d", &stud[i].temp);

        if (stud[i].temp == 1)
        {
            printf("enter your JEE marks :");
            scanf("%d", &stud[i].marks.JEE);
        }
        else if (stud[i].temp == 2)
        {
            printf("enter your NEET marks :");
            scanf("%d", &stud[i].marks.NEET);
        }

        printline();
    }
}

struct student high_JEE(struct student st[], int n)
{
    int i, max = 0, pos;

    for (i = 0; i < n; i++)
    {
        if (st[i].temp == 1)
        {
            if (st[i].marks.JEE > max)
            {
                max = st[i].marks.JEE;
                pos = i;
            }
        }
    }

    return st[pos];
}

int total_NEET(struct student s[], int n)
{
    int i, neet_count = 0;

    for (i = 0; i < n; i++)
    {
        if (s[i].temp == 2)
        {
            neet_count++;
        }
    }

    return neet_count;
}

int main()
{
    int n, t_neet;
    struct student max_JEE;

    printf("enter the total no of student :");
    scanf("%d", &n);

    stu=(struct student *)calloc(n, sizeof(struct student));  //*dynamic memory allocation

    getstudent(stu, n);

    max_JEE = high_JEE(stu, n);

    printf("highest marks in JEE \nname = %s and marks = %d\n", max_JEE.name, max_JEE.marks.JEE);

    t_neet = total_NEET(stu, n);

    printf("\n%d student appeared in NEET exam \n", t_neet);
    return 0;
}
