/*

Create a structure to specify data of customers in a bank. The data to be stored are: Account
number, name, and balance. Assume maximum of 100 customers in the bank.
1) Write a function named Inquiry to print the account no and name of each customer whose
balance is less than 1000 Rs.
2) Write a function named Withdrawal to withdraw valid amount from the account. If the amount
is not valid for withdrawal, it should display appropriate error message. If the amount is valid
then deduct the amount from the current balance.
*/

#include <stdio.h>
#include <stdlib.h>

struct customer
{
    int ac_no;
    char name[100];
    int bal;
} cus[100];

void printline()
{
    int i;
    printf("\n");
    for (i = 0; i < 60; i++)
    {
        printf("=");
    }

    printf("\n");
}

void inquiry(struct customer c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (c[i].bal < 1000)
        {
            printf("name : %s and account no = %d\n", c[i].name, c[i].ac_no);
        }
    }
    printline();
}

void withdrawal(struct customer mem[], int n)
{
    int i, amount, acc, flag, pos;

    printf("enter the account no for withdrawal :");
    scanf("%d", &acc);

    for (i = 0; i < n; i++)
    {
        if (acc == mem[i].ac_no)
        {
            pos = i;
            break;
        }
    }

    printf("enter the amount you want to withdrawal :");
    scanf("%d", &amount);

    if (amount < mem[pos].bal)
    {
        mem[pos].bal = mem[pos].bal - amount;
    }
    else
    {
        printf("please enter valid amount :");
        exit(0);
    }

    printf("thanks \n your current balance is %d", mem[pos].bal);
}

int main()
{
    int n, i, j;

    printf("enter the total customer :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the name of %d customer :", i + 1);
        scanf("%s", cus[i].name);

        printf("enter the acount no of %d customer :", i + 1);
        scanf("%d", &cus[i].ac_no);

        printf("enter the balance of %d customer : ", i + 1);
        scanf("%d", &cus[i].bal);

        printline();
    }

    inquiry(cus, n);
    withdrawal(cus, n);

    return 0;
}
