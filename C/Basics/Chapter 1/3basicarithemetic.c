#include <stdio.h>
//This programm performs simple arithemetic operations

int main()
{
    int a = 10;
    int b = 30;
    int e = 10000 + 1 + 6 + 3;
    int z = 10000 - (1 + 6 + 3);
    float c = 12.50;
    char d = 'Y';
    char j = 'N';

    printf("\n");

    printf("All operations below are addition \n");
    printf("\n");
    printf("The value of a+b is %d \n", a + b);
    printf("and \n");
    printf("The value of e is %d \n", e);
    printf("and \n");
    printf("The Value of a+c is %f \n", a + c);
    printf("and \n");
    printf("The Value of a+b+c is %f \n", a + b + c);
    printf("\n");
    printf("The programm compiled sucessfully, You have done it. \n");
    printf("\n");

    printf("All operations below are Substraction \n");
    printf("\n");
    printf("The value of b-a is %d \n", b - a);
    printf("and \n");
    printf("The value of z is %d \n", z);
    printf("and \n");
    printf("The Value of c-a is %f \n", c - a);
    printf("and \n");
    printf("The Value of a+b-c is %f \n", a + b - c);
    printf("\n");
    printf("The programm compiled sucessfully, You have done it. \n");

    printf("\n");

    printf("Quit %c \n", d);
    printf("Or \n");
    printf("Stay Tuned %c \n", j);

    return 0;
}
