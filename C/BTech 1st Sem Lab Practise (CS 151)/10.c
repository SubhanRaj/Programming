// Question10: Write a program that takes two operands and one operator from the user and perform the operation and prints the result by using the Switch statement.
// Objective: To create a C program that takes two operands and one operator from the user and perform the operation and prints the result by using the Switch statement.

/*---------------Code---------------*/

// A C program that takes two operands and one operator from the user and perform the operation and prints the result by using the Switch statement.
// Author: Subhan Raj
#include <stdio.h>

int main()
{
    char operator;
    float first, second;
    printf("\n");
    printf("This C program takes two operands and one operator from the user and perform the operation and prints the result by using the Switch statement.");
    printf("\nEnter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("\nEnter two operands: ");
    scanf("%f %f", &first, &second);

    switch (operator)
    {
    case '+':
        printf("\n%f + %f = %f\n", first, second, first + second);
        break;
    case '-':
        printf("\n%f - %f = %f\n", first, second, first - second);
        break;
    case '*':
        printf("\n%f * %f = %f\n", first, second, first * second);
        break;
    case '/':
        printf("\n%f / %f = %f\n", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("\nError! operator is not correct\n");
    }

    return 0;
}
// Output of the Above program-

/* This C program takes two operands and one operator from the user and perform the operation and prints the result by using the Switch statement.
Enter an operator (+, -, *,): *

Enter two operands: 12 75

12.000000 * 75.000000 = 900.000000*/
