// Question14: Write a program to print the Fibonacci series upto 'N'
// Objective: To create a C program that print the the Fibonacci series upto 'N'

/*---------------Code---------------*/

// A C program that print the Fibonacci series upto 'N'.

// Author: Subhan Raj

#include <stdio.h>

int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, num;
    printf("\n");
    printf("This C Program print the Fibonacci series upto 'N'.\n");

    printf("Enter the value of N: ");
    scanf("%d", &num);

    // displays the first two terms which is always 0 and 1
    printf("\nFibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= num)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");

    return 0;
}
// Output of the Above program-

/*This C Program print the Fibonacci series upto 'N'.
Enter the value of N: 10

Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, */
