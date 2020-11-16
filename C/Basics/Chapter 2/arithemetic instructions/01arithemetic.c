#include <stdio.h>
// Simple arithemetic instructions

int main()
{

    int a = 8;
    int b = 4;
    float c = 2.5;
    float d = a+b-c;

    printf("\n");

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of d is %f\n", d);
    printf("The value of (a / b)*c is %f\n", a / b*c);
    printf("The value of a + b + c  is %f\n", a + b + c - d) ;
    printf("\n");

    return 0;
}