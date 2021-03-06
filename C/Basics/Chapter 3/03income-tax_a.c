#include <stdio.h>

// This programm determine weather the user is applicable for income tax or not.
// Takes input from the user.
// If yes, then it calculates the applicable income tax from pre-defined slab.
// The slabs are mentioned below-
/*      Income           Tax (in percent)  */
/* 2.5 Lakh - 5 lakh             5%        */
/* 5 lakh - 10 lakh             20%        */
/* 10 lakh & Above              30%        */
// Income below 2.5 lakhs is extemped from taxation.

int main(){
    
    float tax = 0, income;

    printf("\n");
    printf("Enter your income\n");
    scanf("%f", &income);

    if ( income >= 250000 && income <= 500000)
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

    printf("Your net income tax to be apid is %f \n", tax);

    return 0;
}