// Question: Write a program to print the sum of all numbers up to a given number
// Objective: To create a C program that print the sum of all numbers up to a given number

/*---------------Code---------------*/

// A C program that print the sum of all numbers up to a given number
// Author: Subhan Raj
#include <stdio.h>

int main()
{

    int i = 1;
    int sum = 0;
    int n;

    printf("\n");
    printf("This C program displays the sum of the the numbers upto 'n'\n ");
    printf("Enter the value of 'n'- ");
    scanf("%d", &n);
    printf("\n");
    // It calculates sum using while loop
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of 'n' natural numbers upto %d is %d", n, sum);

    printf("\n");
    return 0;
}
// Output of the Above program-

/* This C program displays the sum of the the numbers upto 'n' 
   Enter the value of 'n'- 6535

The sum of 'n' natural numbers upto 6535 is 21356380*/
