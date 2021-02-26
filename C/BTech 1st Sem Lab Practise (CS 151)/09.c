// Question: Write a program that tells whether a given year is a leap year or not.

// Objective: To create a C program that tells whether a given year is a leap year or not.

/*---------------Code---------------*/
// A C program that tells whether a given year is a leap year or not.
// Author: Subhan Raj
#include <stdio.h>

// This programm is to determine whether a given year is a leap year or not.

int main()
{

    int year;

    printf("\n");
    printf("This C program finds whether a given year is a leap year or not.\n");
    printf("Enter any year ");
    scanf("%d", &year);
    printf("\nThe year entered by you is %d \n", year);

    // leap year if perfectly visible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year. \n", year);
    }
    /* not a leap year if divisible by 100
       but not divisible by 400 */
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year. \n", year);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year. \n", year);
    }
    // all other years are not leap year
    else
    {
        printf("%d is not a leap year. \n", year);
    }

    return 0;
}
// Output of the Above program-

/* This C program finds whether a given year is a leap year or not.
Enter any year 2004

The year entered by you is 2004 
2004 is a leap year. */
