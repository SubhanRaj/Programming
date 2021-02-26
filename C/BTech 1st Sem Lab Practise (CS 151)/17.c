// Question16: Write a program to find the reverse of a number.

// Objective: To create a C program that find the reverse of a number.
/*---------------Code---------------*/

// A C program that find the reverse of a number.
// Author: Subhan Raj

#include <stdio.h>
int main()
{
    int n, rev = 0, remainder;
    printf("\nThis C Program find the reverse of a number.\n");
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("\nReversed number will be %d\n", rev);
    return 0;
}
// Output of the Above program-

/* This C Program find the reverse of a number.
Enter an integer: 15

Reversed number will be 51*/
