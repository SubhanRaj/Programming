#include <stdio.h>
//This programm can recive input from use and do simple mathematical calulations

int main()
{
    int a, b;
    float c, d;

    printf("Enter any integer for value of 'a'\n");
    scanf("%d", &a);

    printf("Enter any integer for value of 'b'\n");
    scanf("%d", &b);

    printf("\n");
    printf("Your entered values of 'a' & 'b' are %d and %d . \n", a, b);
    printf("\n");

    printf("Enter any real variable for value of 'c'\n");
    scanf("%f", &c);

    printf("Enter  real variable for value of 'd'\n");
    scanf("%f", &d);

    printf("\n");
    printf("Your entered values of 'c' & 'd' are %f and %f . \n", c, d);
    printf("\n");

    printf("\n");
    printf("Let's do some simple maths \n");
    printf("\n");

    printf("\n");
    printf("The value of a+b is %d \n", a + b);
    printf("and \n");
    printf("The Value of a+c is %f \n", a + c);
    printf("and \n");
    printf("The Value of a+b+c is %f \n", a + b + c);
    printf("and \n");
    printf("The Value of a+b+c+d is %f \n", a + b + c + d);
    printf("and \n");
    printf("The Value of (a+b)/c is %f \n", (a + b) / c);
    printf("and \n");
    printf("The Value of [{(a+b)/c}*d] is %f \n", (a + b) / c * d);
    printf("and \n");
    printf("The Average Value of entered number is %f \n", (a + b + c + d) / 4);

    printf("\n");
    printf("The programm compiled sucessfully. \n");
    printf("\n");

    return 0;
}
