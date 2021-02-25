// Question: Write a program that calculates the Simple Interest The Principal Amount, Rate of interest and Time are entered through the keyboard.

// Objective: To create a C program that calculates the Simple Interest. The Principal Amount, Rate of interest and Time are entered through the keyboard.

/*---------------Code---------------*/
// A C program that calculates the Simple Interest. The Principal Amount, Rate of interest and Time are entered through the keyboard.
// Author: Subhan Raj
#include <stdio.h>

int main()
{
    int pa, roi, tp; // pa= Principal Amount: roi= rate of Interest : tp = time period
    int si;          // si= simple Interest
    int fa;          // Final Amount
    printf("\n");

    printf("This C Program calculates Simple Interest from the user inputted values.");
    /* Input principle, time and rate */
    printf("\nEnter Principal Amount- ");
    scanf("%d", &pa);
    printf("\nEnter Rate of Intrest- ");
    scanf("%d", &roi);
    printf("\nEnter Time period in months- ");
    scanf("%d", &tp);
    /* Calculation of Simple Interest */
    si = (pa * roi * tp) / 100;
    fa = si + pa;

    printf("\nThe simple Interest on Rs %d at an Interest rate of %d after %d months will be %d and the total amount will be %d\n", pa, roi, tp, si, fa);
    return 0;
}

// Output of the Above program-

/*This C Program calculates Simple Interest from the user inputed values.
Enter Principal Amount- 100

Enter Rate of Intrest- 10

Enter Time period in months- 12

The simple intrest on Rs 100 at Interest rate of 10 after 12 months will be 120 and the total amount will be 220 */