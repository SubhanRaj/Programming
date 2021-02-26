// Question13: Write a program to print the sum of even and odd numbers from 1 to N numbers.

// Objective: To create a C program that print the sum of even and odd numbers from 1 to N numbers.

/*---------------Code---------------*/

// A C program that print the sum of even and odd numbers from 1 to N numbers.

// Author: Subhan Raj

#include <stdio.h>

int main()
{
    int i, num, Even_Sum = 0, Odd_Sum = 0;
    printf("\n");
    printf("This C Program print the sum of even and odd numbers from 1 to N numbers.\n");

    printf("Enter the value of N: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            Even_Sum = Even_Sum + i;
        }
        else
        {
            Odd_Sum = Odd_Sum + i;
        }
    }
    printf("\nThe Sum of Even Numbers upto %d = %d.", num, Even_Sum);
    printf("\nThe Sum of Odd Numbers upto %d  = %d.\n", num, Odd_Sum);

    return 0;
}
// Output of the Above program-

/*This C Program print the sum of even and odd numbers from 1 to N numbers.
Enter the value of N: 10

The Sum of Even Numbers upto 10 = 30.
The Sum of Odd Numbers upto 10  = 25.*/
