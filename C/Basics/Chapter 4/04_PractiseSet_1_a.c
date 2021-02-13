// A C prpogram to print multiplication table of a given number n upto range r
// Author : Subhan Raj
// Git: https://github.com/subhanraj

#include <stdio.h>
#include <math.h>

int main()
{

    int i;
    int n;
    int r;

    printf("\n");

    printf("This c programm prints multiplication table of any given number 'n' for range r \n");
    printf("Enter the value of n- ");
    scanf("%d", &n);

    printf("Enter the range of r- ");
    scanf("%d", &r);

    printf("\n");

    printf("**** Multiplication table of %d  upto range %d **** \n \n", n, r);

    for (i = 1; i <= r; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    printf("\n");

    return 0;
}