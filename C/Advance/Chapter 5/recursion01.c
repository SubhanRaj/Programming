#include <stdio.h>

/* This C Program find factorial using recursion */
// Author : Subhan Raj

int factorial(int x);
int main()
{
    int n;
    printf("\nThis C program prints factorial using recursion\n");
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("\nThe Value of factorial of %d is %d\n", n, factorial(n));
    return 0;
}
int factorial(int x)
{
    int f;
    if (x == 0 || x == 1)
        return 1;

    else
        f = x * factorial(x - 1);
}