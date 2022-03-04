#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int rno;
    char name[30];
    struct subject
    {
        int scode;
        char sname[20];
        int mark;
    }sub[3];
    int total;
    float per;
    
}student;

void create()
{
    student *s;
        FILE *p1;
    int n, i, j;
    printf("enter how many students you want :");
    scanf("%d", &n);
    
    s=(student*)calloc(n, sizeof(student));
    p1=fopen("student.txt", "w");


    for ( i = 0; i < n; i++)
    {
        s[i].total=0;
        printf("Enter the roll no :");
        scanf("%d", &s[i].rno);
        fflush(stdin);
        printf("enter the name :");
        scanf("%s", s[i].name);
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the marks of subject %d ", j+1);
            scanf("%d", &s[i].sub[j].mark);
            s[i].total+=s[i].sub[j].mark;
        }
        fwrite(&s[i], sizeof(student), 1, p1);
        
    }
    fclose(p1);
}

void display()
{
    student s1;
    FILE  *p1;
    int j;
    p1=fopen("student.txt", "r");
    while (fread(&s1, sizeof(student), 1, p1));
    {
        printf("\n%-5d %-20s", s1.rno, s1.name);
        for ( j = 0; j < 3 ; j++)
        {
            printf("%4d", s1.sub[j].mark);
        }
        printf("%5d", s1.total);

    }
    fclose(p1);
    
}


int main(int argc, char const *argv[])
{
    int ch;
        do
        {
            printf("\n1. CREATE");
            printf("\n2.DISPLAY");
            printf("\n3.APPEND");
            printf("\n 0.EXIT");

            printf("enter your choise :");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            //case 3:
                //append();
                //break;
            }
        }while (ch !=0);

        
    return 0;
}
