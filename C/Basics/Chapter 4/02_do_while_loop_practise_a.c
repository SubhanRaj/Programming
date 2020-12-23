#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0;
    int n;

    printf("\n");

    printf("This programm print integers upto n times. \n");
    printf("Enter the value of n - ");
    scanf("%d", &n);
    printf("\n");

    do
    {

        printf(" The number is %d \n", i + 1);
        i++;
    } while (i < n);

    printf("\n");
    return 0;
}