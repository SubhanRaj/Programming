#include <stdio.h>

// Quick Quiz-
// Write a C program to print first 'n' natural numbers using for loop.

int main()
{

    int i;
    int n = 5; // n is the value upto which the numbers should be printed.

    printf("\n");

    printf(" Enter the value of n- \n");
    scanf("%d", &n);

    printf("\n");

    for (i = 0; i <= n; i++)
    {
        printf(" The number is %d \n", i);
        
        
    }
    printf("\n");
    return 0;
}