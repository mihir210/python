#include <stdio.h>

int Isupper(char a)
{
    if (a >= 'A' && a<= 'Z')
    {
        return 1;
    }
    else
        return 0;
    
}
char Convert(char b)
{
    b=b+32;

    return b;
}

int main() 
{
    int i;
    char name;

    printf("enter the charecter :");
    scanf("%c", &name);


    if(Isupper(name))
    {
        name = Convert(name);
        printf("charecter : %c", name);
    }
    else
    {
        printf("given charecter is in lower case :");
    }
    

    return 0;
}