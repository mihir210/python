#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j, count[10], len;
    char name[100];

    printf("enter the string :");
    gets(name);

    for ( i = 0;name[i]!='\0' ; i++)
    {
        for ( j = 0; name[j]!=' '; j++)
        {
            count[i]++;
        }
        
    }

    for ( i = 0; name[i]!='\0'; i++);

    len=i;
    

    for (i=0; i<len; i++)
    {
        if (count[i+1]>count[i])
        {
            /
        }
        
    }
    
    


    return 0;
}