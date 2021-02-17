/*Question : Write a program to check that the entered number is even or odd */

// Answer:
/* A Program to check the enterd number is even or odd */
// Author: Subhan Raj

#include <stdio.h>

int main()
{

    int n;

    printf("\nEnter any Integer- ");
    scanf("%d", &n);


    if (n % 2 == 0)
    {
        printf("\n%d is even number\n\n", n);
    }
    else
    {
        printf("\n%d is odd number\n\n", n);
    }

    return 0;
}