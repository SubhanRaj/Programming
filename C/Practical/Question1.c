// Question7: Write a program to to find the greatest of three numbers.

// Objective: To create a C program that finds the greatest of three numbers.

/*---------------Code---------------*/
// A C program that finds the greatest of three numbers.
// Author: Subhan Raj
#include <stdio.h>

int main()
{

    int a, b, c, max;
    printf("\n");
    printf("This C program finds the greatest of three numbers.\n");
    printf("Enter Number a- ");
    scanf("%d", &a);
    printf("Enter Number b- ");
    scanf("%d", &b);
    printf("Enter Number c- ");
    scanf("%d", &c);
    printf("\n");
    

    // Below is conditional operator

    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    // Print the largest number

    printf("Largest number among %d, %d and %d is %d.", a, b, c, max);
    printf("\n");

    return 0;
}