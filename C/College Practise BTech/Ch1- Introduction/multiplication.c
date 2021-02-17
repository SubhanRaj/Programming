// A C prpgramm to multiply two integers

#include <stdio.h>

int main()
{

    int a, b, mul;

    printf("\n");
    printf("This program multiply two Integers \n");
    printf("Enter First Number- ");
    scanf("%d", &a);
    printf("Enter Second Number- ");
    scanf("%d", &b);
    mul = a*b;

    printf("The Multilipcation sum of %d x %d is %d \n", a, b, mul);
    printf("\n");

    return 0;
}