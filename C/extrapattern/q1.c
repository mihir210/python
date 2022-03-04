#include<stdio.h>

struct student
{
    union result
    {
        int JEE;
        int NEET;
    }marks;
    int id;
    int flag;

}stud[10];


void getstudentinfo(int n)
{
    int i, count[10];

    for ( i = 0; i < n; i++)
    {
        printf("enter the id of student %d:", i+1);
        scanf("%d", &stud[i].id);


        printf("enter the exam marks \n 1.JEE \n 2.NEET \n");
        scanf("%d", &stud[i].flag);

        if (stud[i].flag==1)
        {
            printf("enter your JEE marks :");
            scanf("%d", &stud[i].marks.JEE);
        }
        else if(stud[i].flag==2)
        {
            printf("enter your NEET marks :");
            scanf("%d", &stud[i].marks.NEET);
        }
        
    }
    
}

void highest_mark(struct student s2[], int n)
{
    int i, max_JEE=0, pos;

    for ( i = 0; i < n; i++)
    {
        if (stud[i].flag==1)
        {
            if (s2[i].marks.JEE>max_JEE)
            {
                max_JEE=s2[i].marks.JEE;
                pos=i;
            }
        }
        
    }

    printf("highest mark in JEE is %d and stud id %d", max_JEE, stud[pos].id);

    
}

void exam(struct student s3[], int n)
{
    int i, m_JEE=0, m_NEET=0;

    for ( i = 0; i < n; i++)
    {
        if (s3[i].flag==1)
        {
            m_JEE++;
        }
        else if(s3[i].flag==2)
        {
            m_NEET++;
        }
        
    }

    if (m_JEE> m_NEET)
    {
        printf("JEE exam has highest count %d" ,m_JEE);
    }
    else
    {
        printf("NEET exam has heighest count %d", m_NEET);
    }
    
    
}
int main()
{
    int i, n;

    printf("enter the number of student  :");
    scanf("%d", &n);

    getstudentinfo(n);

    highest_mark(stud, n);

    exam(stud, n);

    return 0;
}
