/* A C Program to calculate the sum of the numbers 
occuring in Multiplication table of any number.*/



#include <stdio.h>
#include <math.h>

int main()
{

    int i;
    int n;
    int r;
    int sum;

    printf("\n");

    printf("This c programm prints multiplication table of any given number 'n' upto 'r' times and add their values \n");
    printf("Enter the value of n- ");
    scanf("%d", &n);
    printf("Enter the range 'r'- ");
    scanf("%d", &r);

    printf("\n");

    printf("**** Multiplication table of %d **** \n \n", n);

    for (i = 1; i <= r; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\n");
    printf("The value of sum of the numbers occuring in Multiplication table of %d is %d \n", n, sum);
    printf("\n");

    return 0;
}