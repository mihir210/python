/*
Implement all required user defined functions for following main ( ).
int main( )
{
int num,result;
num=GetNumber( ); //read the number
result=Cube(num); //find cube of the number
Display( num,result); //print the number and its cube
return 0;
}
*/

#include <stdio.h>

int Getnumber()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);

    return n;
}

int cube(int num)
{
    int i, cu=1;
    for (i = 0; i < 3; i++)
    {
        cu = cu * num;
    }
    return cu;
}

void display(int q, int r)
{
    printf("%d number and its cube %d", q, r);
}

int main(int argc, char const *argv[])
{
    int num, result;
    num = Getnumber();
    result = cube(num);

    display(num, result);

    return 0;
}
