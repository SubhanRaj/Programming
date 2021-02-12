/* Documnetation Section */
// File- sum.c
// Description: This C program add sum of two Numbers
// Autohor: Subhan Raj
// Git- https://github.com/SubhanRaj

// Header File Section
#include <stdio.h> // Standard C Library Functions

int main()
{

    int num1, num2, sum;
    printf("\n");
    printf("Enter Number 'a'- ");
    scanf("%d", &num1);
    printf("Enter Number 'b'- ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum of Number %d  and %d is %d \n", num1, num2, sum);

    return 0;
}