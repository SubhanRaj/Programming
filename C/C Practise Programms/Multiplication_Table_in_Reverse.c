// A C program to print multiplication table of n in reverse order.

#include <stdio.h>

int main()
{

    int i;
    int n;

    printf("\n");

    printf("Enter the value of 'n' ");
    scanf("%d", &n);
    printf("\n");

    printf("***Multiplication table of %d in reverse order*** \n \n", n);

    for (i = 10; i; i--)
    {
        printf("%d X %d  = %d \n", n, i, i * n);
    }

    printf("\n");

    return 0;
}