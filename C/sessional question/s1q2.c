/*
 Write a program to print the following pattern based on number of lines given in the input. For
example, if user provides 3 as an input then print following pattern.
Check if the number is greater than 0.
1
22
111
2222
11111
222222
*/



#include<stdio.h>

int main()
{
    int i,j, n;

    printf("enter the number :");
    scanf("%d", &n);

    if (n>0)
    {
        for ( i = 1; i <= 2*n; i++)
        {
            for ( j = 1; j <=i; j++)
            {
                if (i%2==0)
                {
                    printf("%d",2);
                }
                else  
                {
                    printf("%d", 1);
                }
                
            
            }
        printf("\n");
        }
    
    }
    

    
    return 0;
}
