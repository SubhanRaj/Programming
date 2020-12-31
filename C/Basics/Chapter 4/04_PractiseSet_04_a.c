// A program to print sum of n natural numbers using while loop

#include <stdio.h>

int main()
{

    int i = 1;
    int sum = 0;
    int n;

    printf("\n");

    printf("### This program displays the sum of the the numbers upto 'n' \n ");
    printf("Enter the value of 'n'- ");
    scanf("%d", &n);
    printf("\n");

    while (i <= n)
    {

        sum += i;
        i++;
    }

    printf(" The sum of natural numbers upto %d is %d", n, sum);

    printf("\n");
    return 0;
}