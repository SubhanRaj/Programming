#include <stdio.h>

int main()
{

    int applicable;
    float income;
    float tax = 0;

    printf("\n");
    printf("Welcome to Income Tax Regulations Authority, is your income below 2.5 lakhs (250000) ? \n");
    printf("Enter '1' if your income is below 2.5 lakhs or enter '2' if your income is above 2.5 lakhs.\n");
    scanf("%d", &applicable);

    if (applicable == 1)
    {
        printf("You are exempted from Income tax\n");
    }
    else if (applicable == 2)
    printf("Enter your income\n");
    scanf("%f", &income);

    {
        if (income >= 250000 && income <= 500000)
        {
            tax = tax + 0.05 * (income - 250000);
        }
        if (income >= 500000 && income <= 1000000)
        {
            tax = tax + 0.20 * (income - 500000);
        }
        if (income >= 1000000)
        {
            tax = tax + 0.30 * (income - 500000);
        }
        printf("Your income is %f which is applicable for taxation\n", income);
        printf("The tax you have to pay is %f\n", tax);
    }
    

    return 0;
}