// Question16: Write a program to find the sum of digits of the entered number.

// Objective: To create a C program that find the sum of digits of the entered number.
/*---------------Code---------------*/

// A C program that find the sum of digits of the entered number.
// Author: Subhan Raj

#include <stdio.h>
int main()
{
    int n, sum = 0, r;
    printf("\n");
    printf("This C Program find the sum of digits of the entered number.\n");
    printf("Enter a number ");

    for (scanf("%d", &n); n != 0; n = n / 10)
    {
        r = n % 10;
        sum = sum + r;
    }

    printf("Sum of digits of a number = %d\n", sum);
    printf("\n");

    return 0;
}
// Output of the Above program-

/* This C Program find the sum of digits of the entered number.
Enter a number 15
Sum of digits of a number = 6*/
