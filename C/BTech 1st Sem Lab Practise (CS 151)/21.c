/* Question 21. WAP that inputs two arrays and saves the sum of corresponding elements of these
arrays in a third array and prints them.*/

/* Objective : To create a C program that inputs two arrays and saves the sum of corresponding elements of these
arrays in a third array and prints them.*/

/*---------------Code---------------*/
#include <stdio.h>

int main()
{
    int a[2], b[2], c[2], i;
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter the elements of array a [i] ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter the elements of array b [i] ");
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 2; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < 2; i++)
    {
        printf("%d", c[i]);
    }
printf("\n");
    return 0;
}
