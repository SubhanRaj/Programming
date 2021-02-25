#include <stdio.h>
// A C program which can do calculations as told by user
// Author : Subhan Raj

int main()
{
    char operator;
    float first, second;
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