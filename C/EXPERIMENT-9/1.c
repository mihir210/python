/*
Generate a result table which consists of student id, student name, marks of three subject
and total marks. Write a program which takes input for ten students and displays result
table. Also display student information separately who got the highest total.
*/

#include <stdio.h>

struct student
{
   char name[30];
   int idno;
   int sub[3];
   int total;
};

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
   int i, j, max, count, total, n, a[10], ni;
   struct student st[10];

   printf("how many student have :");
   scanf("%d", &n);

   /*  read names and id numbers*/
   for (i = 0; i < n; i++)
   {
      printf("\nEnter name and id number for student %d : ", i + 1);
      scanf("%s", &st[i].name);
      scanf("%d", &st[i].idno);
   }

   printline();

   /*  read ith student's  subject*/
   for (i = 0; i < n; i++)
   {
      st[i].total = 0;
      for (j = 0; j < 3; j++)
      {
         printf("\nEnter marks of student %d for subject %d : ", i + 1, j + 1);
         scanf("%d", &st[i].sub[j]);
         st[i].total += st[i].sub[j];
      }
      printline();
   }

      /*   calculate total marks obtained by each student*/
   printf("\nID\tNAME\tPPS1\tMATH\tBEE\t\tTOTAL\n");
   for (i = 0; i < n; i++)
   {
      printf("\n%d\t%s\t%d\t%d\t%d\t\t%d\n", st[i].idno, st[i].name, st[i].sub[0], st[i].sub[1], st[i].sub[2], st[i].total);
      printline();
   }

   max = 0;

   for (i = 0; i < n; i++)
   {
      if (st[i].total > max)
      {
         max = st[i].total;
         ni = i;
      }
   }
   printline();
   printf("\n%s obtained the total highest marks.\n", st[ni].name);
   printline();

   return 0;
}
