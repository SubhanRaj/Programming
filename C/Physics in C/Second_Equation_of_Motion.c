// Calculator for second equation of motion

#include <stdio.h>
#include <math.h> // using math library for using pow and other mathematical operations

void main()
{
    //declaration of variable
    float v, t, a, dis;

    //getting the value of initial velocity
    printf("\nEnter the Value Of Initial Velocity ");
    scanf("%f", &v);

    //getting the value of time
    printf("\nEnter the Value Of Time ");
    scanf("%f", &t);

    //getting the value of acceleration
    printf("\nEnter the Value Of Acceleration ");
    scanf("%f", &a);

    if (t > 0) //applying condition since time can't be negative
    {
        // formula to calculate distance
        dis = ((v * t) + (0.5 * a * pow(t, 2.0))); // pow is used to apply power value

        printf("\nWith the inital velocity %f, time %f and acceleration %f, the value of distance is %f m.", v, t, a, dis);
    }

    else
    {
        printf("\nTime can't be negative");
    }
}