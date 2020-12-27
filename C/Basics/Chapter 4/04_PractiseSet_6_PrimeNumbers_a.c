// A C program to check whether the given number is prime number or not

#include <stdio.h>

int main()
{

    //  Prime Number- A prime number (or a prime) is a natural number greater than 1
    //  that is not a product of two smaller natural numbers.

    // Thi is not the best way to find prime numbers.

    int i;
    int n;
    int prime = 1;

    printf("\n");
    printf("This C Program can check whether the enterd Integer is a Prime Number or not. \n");
    printf("Enter any Integer 'n'- ");
    scanf("%d", &n);
    printf ("\n");

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number \n", n);
    }
    else
    {
        printf("%d is a prime number \n", n);
    }

    printf("\n");

    return 0;
}