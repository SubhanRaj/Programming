#include <stdio.h>

// This C Programm calculates simple interes from user

int main()
{

    int p, t;
    float r;

    printf("\n");

    printf("Enter the pricipal amount\n");
    scanf("%d", &p);

    printf("Enter the time period in year\n");
    scanf("%d", &t);

    printf("Enter the rate of interest \n");
    scanf("%f", &r);

    float si = p * t * r / 100;

    printf("The simple interest will be %f\n", si);
    printf("\n");
    printf("and the final amount will be- %f\n", si + p);

    printf("\n");

    

    return 0;
}