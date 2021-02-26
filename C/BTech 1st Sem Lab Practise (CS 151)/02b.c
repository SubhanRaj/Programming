// Question2b: Write a program that calculates the Compound Interest The Principal Amount, Rate of interest and Time are entered through the keyboard.

// Objective: To create a C program that calculates the Compound Interest. The Principal Amount, Rate of interest and Time are entered through the keyboard.

/*---------------Code---------------*/
// A C program that calculates the Compound Interest. The Principal Amount, Rate of interest and Time are entered through the keyboard.
// Author: Subhan Raj
#include <stdio.h>
#include <math.h>

int main()
{
    int pa, roi, tp; // pa= Principal Amount: roi= rate of Interest : tp = time period
    int ci;          // ci= Compound Interest
    int fa;          // Final Amount
    printf("\n");

    printf("This C Program calculates Compound Interest from the user inputted values.");
    /* Input principle, time and rate */
    printf("\nEnter Principal Amount- ");
    scanf("%d", &pa);
    printf("\nEnter Rate of Intrest- ");
    scanf("%d", &roi);
    printf("\nEnter Time period in months- ");
    scanf("%d", &tp);
    /* Calculatation of  compound interest */
    ci = pa * (pow((1 + roi / 100), tp));
    fa = ci + pa;

    printf("\nThe Compound Interest on Rs %d at an Interest rate of %d after %d months will be %d and the total amount will be %d\n", pa, roi, tp, ci, fa);
    return 0;
}

// Output of the Above program-

/*This C Program calculates Compound Interest from the user inputted values.
Enter Principal Amount- 1500
Enter Rate of Intrest- 15
Enter Time period in months- 36

The Compound Interest on Rs 1500 at an Interest rate of 15 after 36 months will be 1500 and the total amount will be 3000 */