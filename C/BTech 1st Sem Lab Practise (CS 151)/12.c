// Question12: Write a program to find the factorial of a given number.
// Objective: To create a C program that print the factorial of a given number.

/*---------------Code---------------*/

// A C program that print the the factorial of a given number.
// Author: Subhan Raj
#include <stdio.h>

int main()
{

    int i = 0;
    int n;
    int factorial = 1;
    printf("\n");
    printf("This Program prints factorial of any given number 'n' \n");
    printf("Enter value of 'n'- ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d.", n, factorial);
    printf("\n");

    return 0;
}
// Output of the Above program-

/* This Program prints factorial of any given number 'n' 
Enter value of 'n'- 15

The factorial of 15 is 2004310016.*/
