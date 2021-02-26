// Question: Write a program that swaps values of two variables using a third variable
// Objective: To create a C program that swaps values of two variables using a third variable

/*---------------Code---------------*/
// A C program that swaps values of two variables using a third variable
// Author: Subhan Raj
#include <stdio.h>
int main()
{
    float first, second, temp;
    printf("\n");
    printf("This C program swaps values of two variables using a third variable\n");
    printf("Enter first number: ");
    scanf("%f", &first);
    printf("Enter second number: ");
    scanf("%f", &second);

    // Value of first is assigned to temp
    temp = first;

    // Value of second is assigned to first
    first = second;

    // Value of temp (initial value of first) is assigned to second
    second = temp;

    printf("\nAfter swapping, First Number = %f\n", first);
    printf("After swapping, Second Number = %f\n", second);
    return 0;
}

// Output of the Above program-

/*This C program swaps values of two variables using a third variable
Enter first number: 15
Enter second number: 35

After swapping, First Number = 35.000000
After swapping, Second Number = 15.000000*/