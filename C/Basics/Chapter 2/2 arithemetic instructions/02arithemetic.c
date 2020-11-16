#include <stdio.h>
#include <math.h>

int main()
{

    int a = 8;
    int b = 4;
    float c = 2.5;

    int z;
    z = a * b;

    float y;

    y = z + (a + b * c);

    float d = a + b - c;

    float x;

    x = (a + b + c + d + y + z) - (a - b - c - d - y - z);

    int k = 5;
    int m = 2;
    float n = 5 % 2;

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of d is %f\n", d);
    printf("The value of (a / b)*c is %f\n", a / b * c);
    printf("The value of a + b + c  is %f\n", a + b + c - d);
    printf("\n");

    printf("The value of z is %d\n", z);
    printf("The value of y is %f\n", y);
    printf("The value of y - d  is %f\n", y - d);
    printf("The value of a + b + c + d + y + z is %f\n", a + b + c + d + y + z);
    printf("The value of x  is %f\n", x);
    printf("\n");

    printf("The value of n  is %f\n", n);
    printf("\n");

    printf("When -5/2, reminder  %d\n", -5 % 2);

    printf("the value of 4 to the power of 2 will be %f\n", pow(4, 2));

    printf("value of 2 * 2 is %d\n", 2 * 2);

    printf("6 + 5 is - %d\n", 6 + 5);
    printf("4.9 + 5.1 is - %f\n", 4.9 + 5.1);
    printf("6.0 + 5 is - %f\n", 6.0 + 5);
    printf("5 / 2 is - %d\n", 5 / 2);
    printf("5 / 2 is - %d\n", 5 % 2);
    printf("5 / 2 is - %f\n", 5.0 / 2);

    int l = 3.0/9;

    printf ("l = %d\n", l);

    float q = 3.0 / 9;

    printf("q = %f\n", q);

    return 0;
}