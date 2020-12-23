#include <stdio.h>
#include <stdlib.h>

int main()
{

    float i = 0;
    float n;

    printf("\n");

    printf("This programm print real numbers upto n times. \n");
    printf("Enter the value of n - ");
    scanf("%f", &n);
    printf("\n");

    do
    {

        printf(" The number is %f \n", i + 1);
        i++;
    } while (i < n);

    printf("\n");
    return 0;
}