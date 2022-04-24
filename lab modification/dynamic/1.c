/*
Write a program which Sorts all the elements of 1-D Array.
*/

// !#include <stdio.h>
// *#include <stdlib.h>
// #include<time.h>
#include "D:\course\DDU\lab practicals\lab modification\exp -1\myh.h"



int main()
{
    int i, j, *ptr, n, temp, len=0, s_n;
    int sum = 0;
    float avg;


    printf("Enter the number of element you want to sort : ");
    scanf("%d", &n);

    ptr= (int *)calloc(n, sizeof(int));  //malloc is inisilied with garbage value

    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        // printf("enter the element of index [%d] :", i);
        // scanf("%d", &ptr[i]);
        ptr[i]=rand()%n;
        printf("number is %d \n", ptr[i]);
        

    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (ptr[j - 1] > ptr[j])
            {
                temp = ptr[j - 1];
                ptr[j - 1] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    printf("\n assending order\n");
    for (i = 0; i < n; i++)
    {
        printf("index [%d] : %d\n", i, ptr[i]);
    }

    free(ptr);


    /*
Find out sum and average of N numbers using array.
*/
    
    printf("enter the number of element you want :");
    scanf("%d", &j);

    

    ptr=(int *)calloc(j, sizeof(int));

    srand(time(NULL));
    for (i = 0; i < j; i++)
    {
        // printf("enter the element of index[%d] : ", i);
        // scanf("%d", &ptr[i]);

        ptr[i]=rand()%j;   
        printf("number is %d\n", ptr[i]);
        sum = sum + ptr[i];
    }

    printf("sum of numbers is %d. \n", sum);

    avg = (sum+0.0 )/ j;

    printf("average of numbers is %f", avg);

    return 0;
}
