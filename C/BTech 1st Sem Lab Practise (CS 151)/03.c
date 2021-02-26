// Question: Write a program to calculate the area and circumference of a circle.

// Objective: To create a C program that calculates the area and circumference of a circle

/*---------------Code---------------*/
// A C program that calculates the area and circumference of a circle
// Author: Subhan Raj
#include <stdio.h>
#define pi 3.14
int main()
{
    float radius, area, circumference; 
    printf("\n");

    printf("This C Program calculates the area and circumference of a circle from the user inputted values.");
    /* Input Radius of Circle */
    printf("\nEnter Radius of Circle- ");
    scanf("%f", &radius);
    // Calculation of Area and Circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("\nThe area of circle of radius %f will be %f and its circumference will be %f.\n", radius, area, circumference);
    return 0;
}

// Output of the Above program-

/*This C Program calculates the area and circumference of a circle from the user inputted values.
Enter Radius of Circle- 15

The area of circle of radius 15.000000 will be 706.500000 and its circumference will be 94.199997.*/