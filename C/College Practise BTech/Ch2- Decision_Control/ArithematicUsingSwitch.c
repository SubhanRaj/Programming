#include <stdio.h>
// A C program which can do calculations as told by user
// Author : Subhan Raj

int main()
{
    char operator;
    double first, second;
    printf("\nEnter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("\nEnter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
    case '+':
        printf("\n%.1lf + %.1lf = %.1lf\n", first, second, first + second);
        break;
    case '-':
        printf("\n%.1lf - %.1lf = %.1lf\n", first, second, first - second);
        break;
    case '*':
        printf("\n%.1lf * %.1lf = %.1lf\n", first, second, first * second);
        break;
    case '/':
        printf("\n%.1lf / %.1lf = %.1lf\n", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("\nError! operator is not correct\n");
    }

    return 0;
}