/* Create a structure to store complex number. Write below given user defined functions for same.
Assume that functions return necessary details and answers are printed inside main function only:
 1) User defined function to subtract one complex number from another one.
 2) User defined function to multiply two complex numbers.
Note: For complex numbers z1= 3 + 4i and z2 = 5 + 6i,

Subtraction, z2 – z1 = (5-3) + (6-4)i = 2 + 2i
Multiplication, z1 x z2 = (3 + 4i) x (5+6i) = (3 x 5)+(3 x 6i)+(4i x 5)+(4i x 6i) = -9 + 38i,
Considering, i2 = (-1)
*/

#include <stdio.h>
#define i *i - 1
struct complex
{
    int real;
    int img;
} z1, z2;

struct complex sub_n(struct complex z_1, struct complex z_2)
{
    struct complex s_n;
    s_n.real = z_2.real - z_1.real;
    s_n.img = z_2.img - z_1.img;

    return s_n;
}

struct complex multiplication(struct complex com_1, struct complex com_2)
{
    struct complex mu;

    mu.real = com_1.real * com_2.real - com_1.img * com_2.img;
    mu.img = com_1.real * com_2.img + com_2.real * com_1.img;

    return mu;
}

int main()
{
    struct complex sub, mul;

    printf("enter the first complex real and img part : ");
    scanf("%d %d", &z1.real, &z1.img);

    printf("enter the second complex real and img part : ");
    scanf("%d %d", &z2.real, &z2.img);

    sub = sub_n(z1, z2);

    printf("sub of complex number is %d +i(%d)\n", sub.real, sub.img);

    mul = multiplication(z1, z2);

    printf("mul of complex number is %d +i(%d).", mul.real, mul.img);

    return 0;
}
