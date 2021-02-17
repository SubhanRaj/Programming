/* C Program for calculation of Expenses & Discounts */
// Author: Subhan Raj
// Git: https://github.com/SubhanRaj

#include <stdio.h>
int main()
{
    int quantity, discount = 0;
    float rate, total;
    printf("\n");

    printf("Enter the quantity -");
    scanf("%d", &quantity);
    printf("Now enter the rate -");
    scanf("%f", &rate);
    printf("\n");

    if (quantity >= 1000)
    {
        discount = 10;
    }
    else if (quantity < 1000)
    {
        discount = 0;
    }
    total = (quantity * rate) - (quantity * rate * discount / 100);
    printf("Your Total expence = INR %f\n", total);
    return 0;
}