// A program to print sum of n natural numbers using do-while loop

#include <stdio.h>

int main()
{

    int i = 1;
    int sum = 0;
    int n;

    printf("\n");

    printf("### This program displays the sum of the the numbers upto 'n' \n ");

    do
    {
        printf("Enter the value of 'n'- ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("\n");

    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }

    printf(" The value of sum of  1 to %d  is %d \n", n, sum);

    printf("\n");
    return 0;
}