// Question: Write a program that accepts the temperature in centigrade and converts into Fahrenheit.
//           Use Formula: C/5 = (F-32)/9
// Objective: To create a C program that accepts the temperature in centigrade and converts into Fahrenheit.

/*---------------Code---------------*/
// A C program that accepts the temperature in centigrade and converts into Fahrenheit.
// Author: Subhan Raj
#include <stdio.h>

int main()
{
    float celsius;
    float far;

    printf("\n");
    printf("This C program accepts the temperature in centigrade and converts into Fahrenheit.\n");
    printf("Enter temperature in Celsius ");
    scanf("%f", &celsius);
    // Conversion of Celsius to Fahrenheit
    far = (celsius * 9 / 5) + 32;
    printf("\n%f degree Celsius will be %f degree Fahrenheit.\n",celsius,far);

    return 0;
}

// Output of the Above program-

/*This C program accepts the temperature in centigrade and converts into Fahrenheit.
Enter temperature in Celsius -40

-40.000000 degree Celsius will be -40.000000 degree Fahrenheit.*/