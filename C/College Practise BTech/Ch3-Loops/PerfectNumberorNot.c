#include <stdio.h>
// C Program to find that the enter number is perfect number of not.
/* A perfect number is a positive integer that is equal to the sum of 
  its positive divisors, excluding the number itself.*/
//   Author: Subhan Raj

int main()
{
    int n, i, sum = 0;
    printf(" Enter a number: ");
    scanf("%d", &n);

    /* Loop to calculate the value of sum of positive divisors */
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    /* if-else condition to print Perfect Number or Not */
    if (sum == n)
        printf("\n %d is a Perfect Number.\n", n);
    else
        printf("\n %d is Not a Perfect Number.\n", n);
    
    return 0;
}