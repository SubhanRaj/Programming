/* Documnetation Section */
// File- area.c
// Description: This C program calculates area of circle having radius 'r'
// Autohor: Subhan Raj
// Git- https://github.com/SubhanRaj

// Header File Section
#include <stdio.h> // Standard C Library Functions

// Defination Section
#define pi 3.14
int main()
{

    /* Decralation Part */
    float radius, area;
    /* Execution Part */
    printf("\n");
    printf("Enter Radius of Circle ");
    scanf("%f", &radius);
    printf("\n");
    area = pi * radius * radius;
    printf("Area of Circle of Radius %f is %f \n", radius, area);

    return 0;
}