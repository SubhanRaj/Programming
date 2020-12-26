// A C Program to calculate the sum of the numbers occuring in Multiplication table of 8.


#include <stdio.h>
#include <math.h>

int main()
{

    int i;
    int n = 8;
    int sum;

    printf("\n");

    printf("This c programm prints multiplication table of any given number 'n' upto 10 times \n");
    printf("Enter the vlaue of n- ");
    scanf("%d", &n);

    printf("\n");

    printf("**** Multiplication table of %d **** \n \n", n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\n");
    printf("The value of sum of the numbers occuring in Multiplication table of 8 is %d \n", sum);
    printf("\n");

    return 0;
}