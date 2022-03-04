/*
Swap/exchange values of two integer variables using function. Use pointers.
 */
#include <stdio.h>

void swapbyvalue(int a, int b)
{
   int temp;

   temp = a;
   a = b;
   b = temp;
}
void swapbyreference(int *a, int *b)
{
   int temp;

   temp = *a;
   *a = *b;
   *b = temp;
}
int main()
{
   int *p1, *p2, x, y;

   printf("Enter the value of x and y\n");
   scanf("%d %d", &x, &y);

   p1 = &x;
   p2 = &y;
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   swapbyvalue(x, y);

   printf("After Swapping by value\nx = %d\ny = %d\n", x, y);

   swapbyreference(p1, p2);
   //swapbyreference(&x, &y);


   printf("After Swapping by reference\nx = %d\ny = %d\n", x, y);

   return 0;
}