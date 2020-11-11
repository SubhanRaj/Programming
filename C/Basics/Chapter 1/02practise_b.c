#include <stdio.h>
/*This programm calculates the area of a circle and volume of cylinder whose base is the circle,
providing value of Pie = 3.14*/

int main()
{

    float radius = 3;
    float pie = 3.14;
    printf("\n");
    printf("The area of circle for given radius is - %f Square Meter. \n", pie * radius * radius);
    float height = 10;
    printf("and \n");
    printf("The volume of cylinder for given radius & height is - %f Cubic Meter. \n", pie * radius * radius * height);

    return 0;
}