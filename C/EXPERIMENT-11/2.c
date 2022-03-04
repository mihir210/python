/*
Write a function mystrcat(s,t) which copies string t to the end of the strings. 
*/

#include<stdio.h>
#include<string.h>

void mystrcat(char *s1, char *s2)
{
    int len, i, j;

    // for ( i = 0; *(s1+i)!='\0'; i++);
    // len=i;

    len=strlen(s1);
    i=len;

    for ( j = 0; *(s2+j)!='\0'; j++)
    {
        *(s1+i)=*(s2+j);
        i++;
    }
    *(s1+i)='\0';
    
}
int main()
{
    int n;
    char str1[100], str2[100], *s, *t;

    printf("enter the string 1 :");
    gets(str1);

    printf("enter the string 2 :");
    gets(str2);
    
    s=str1;
    t=str2;

    mystrcat(s, t);

    printf("new string is : %s", str1);


    return 0;
}
