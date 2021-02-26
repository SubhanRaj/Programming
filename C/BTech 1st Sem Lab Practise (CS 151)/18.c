// Question18: Write a program to print Armstrong numbers from 1 to 100.

// Objective: To create a C program that print Armstrong numbers from 1 to 100.
/*---------------Code---------------*/

// A C program that print Armstrong numbers from 1 to 100.
// Author: Subhan Raj

#include <math.h>
#include <stdio.h>
int main()
{
    int low = 1, high = 100, number, originalNumber, rem, count = 0;
    double result = 0.0;
    printf("\nThis C program print Armstrong numbers from 1 to 100.\n");
    printf("Armstrong numbers between %d and %d are: ", low, high);

    // iterate number from (low + 1) to (high - 1)
    // In each iteration, check if number is Armstrong
    for (number = low + 1; number < high; ++number)
    {
        originalNumber = number;

        // number of digits calculation
        while (originalNumber != 0)
        {
            originalNumber /= 10;
            ++count;
        }

        originalNumber = number;

        // result contains sum of nth power of individual digits
        while (originalNumber != 0)
        {
            rem = originalNumber % 10;
            result += pow(rem, count);
            originalNumber /= 10;
        }

        // check if number is equal to the sum of nth power of individual digits
        if ((int)result == number)
        {
            printf("%d ", number);
        }

        // resetting the values
        count = 0;
        result = 0;
    }

    return 0;
}
// Output of the Above program-

/* This C program print Armstrong numbers from 1 to 100.
Armstrong numbers between 1 and 100 are: 2 3 4 5 6 7 8 9 */
