// Question15: Write a program to checks whether the entered number is prime or not.

// Objective: To create a C program that checks whether the entered number is prime or not.

/*---------------Code---------------*/

// A C program that checks whether the entered number is prime or not.
// Author: Subhan Raj

#include <stdio.h>

int main()
{
    int i;
    int n;
    int prime = 1;

    printf("\n");
    printf("This C Program can checks whether the entered Integer is a Prime Number or not. \n");
    printf("Enter any Integer 'n'- ");
    scanf("%d", &n);
    printf("\n");

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number. \n", n);
    }
    else
    {
        printf("%d is a prime number. \n", n);
    }

    printf("\n");

    return 0;
}
// Output of the Above program-

// Case 1- entered number is a prime number
/*This C Program can checks whether the entered Integer is a Prime Number or not. 
Enter any Integer 'n'- 19

19 is a prime number.  */

// Case 2- Entered number is a non-prime number
/* This C Program can checks whether the entered Integer is a Prime Number or not. 
Enter any Integer 'n'- 49

49 is not a prime number. */
