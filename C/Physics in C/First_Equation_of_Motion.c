/* This C Program can do calculations based on first equation of motion
   v = u +at */
// Formula --> v = u + at (for final velocity 'v' )
// Formula --> u = v - at (for initial velocity 'u' )
// Formula --> a = (v-u)/t (for acceleration 'a' )
// Formula --> t = (v-u)/a (for  time period 't')
// Author : Subhan Raj
#include <stdio.h>

int main()
{
    float v, u, a, t; // Variables used in formula
    int choice;       // Variables used for choice

    printf("\nThis C program can do calculations based on 1st equ. of motion v = u + at.\n");
    printf("Enter '1' for calculating Final Velocity, '2' for initial velocity, '3' for acceleration & '4' for time-period ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter Value of initial velocity 'u' in m/s ");
        scanf("%f", &u);
        printf("Enter Value of acceleration 'a' in m/s ");
        scanf("%f", &a);
        printf("Enter Value of time period 't' in seconds ");
        scanf("%f", &t);
        v = u + a * t;
        printf("\nFinal velocity 'v' will be %f m/s \n", v);
    }
    else if (choice == 2)
    {
        printf("Enter Value of final velocity 'v' in m/s ");
        scanf("%f", &v);
        printf("Enter Value of acceleration 'a' in m/s ");
        scanf("%f", &a);
        printf("Enter Value of time period 't' in seconds ");
        scanf("%f", &t);
        u = v - a * t;
        printf("\nInitial velocity 'u' will be %f m/s \n", u);
    }
    else if (choice == 3)
    {
        printf("Enter Value of final velocity 'v' in m/s ");
        scanf("%f", &v);
        printf("Enter Value of initial velocity  in m/s ");
        scanf("%f", &u);
        printf("Enter Value of time period 't' in seconds ");
        scanf("%f", &t);
        a = (v - u) / t;
        printf("\nAcceleration 'a' will be %f m/s \n", a);
    }
    else if (choice == 4)
    {
        printf("Enter Value of final velocity 'v' in m/s ");
        scanf("%f", &v);
        printf("Enter Value of initial velocity  in m/s ");
        scanf("%f", &u);
        printf("Enter Value of acceleration 'a' in m/s ");
        scanf("%f", &a);
        t = (v - u) / a;
        printf("\nTime Period t be %f seconds \n", t);
    }
    else
    {
        printf("\nWrong Input\n");
    }
    return 0;
}