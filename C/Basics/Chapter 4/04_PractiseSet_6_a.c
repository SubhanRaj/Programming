// A C program to calculate the factoral of a given number using for loop
#include <stdio.h>
#include <math.h>

int main()
{

    int i = 0;
    int n;
    int factorial = 1;
    printf("\n");
    printf("This Program prints factorial of any given number 'n' \n");
    printf("Enter value of 'n'- ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", n, factorial);
    printf("\n");

    return 0;
}