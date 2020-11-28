#include <stdio.h>

int main()
{

    float income;
    float tax;
    
    printf("\n");
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income < 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 100000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your income is %f .\n", income);
    printf("The tax you have to pay is %f \n", tax);

    return 0;
}