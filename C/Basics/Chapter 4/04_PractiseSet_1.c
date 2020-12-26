// A prpogram to print multiplication table of a given number n-

#include <stdio.h>
#include <math.h>

int main()
{

    int i;
    int n;

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
    printf("\n");

    return 0;
}