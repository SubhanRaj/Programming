// Question: Write a program that finds whether a given number is even or odd.

// Objective: To create a C program that finds whether a given number is even or odd.

/*---------------Code---------------*/
// A C program that finds whether a given number is even or odd.
// Author: Subhan Raj
#include <stdio.h>

int main()
{

    int n;
    printf("\n");
    printf("This C program finds whether a given number is even or odd.\n");
    printf("\nEnter any Integer- ");
    scanf("%d", &n);
    // Checking even or odd using for loop and logical operators
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
// Output of the Above program-

// Case 1: Even Number
/*This C program finds whether a given number is even or odd.

Enter any Integer- 6

6 is even number*/

// Case 2: Odd Number

/*This C program finds whether a given number is even or odd.

Enter any Integer- 15

15 is odd number*/
