#include <stdio.h>
#include <math.h>
// This prgramm calculates simple interest from predefinned inputs
// Simple Interest= P(amount) x R(rate of interest) x T(time period) ÷ 100

int main()
{
    float amount = 100;
    // (Principal amount)
    float roi = 10;
    // (Rate of intrest)
    float year = 1;
    // (Time period in days)
    float intrest = (amount * roi * year) / 100;
    printf("\n");
    printf("The value of simple interest will be- %f, \n", intrest);

    return 0;
}