#include <stdio.h>
// Increment and Decrement Operator in C

int main()
{
    int x = 3, y;
    y = x++;

    printf("\n");
    printf("The value of y is %d \n", x++);
    printf("The value of y is %d \n", y);
    printf("The value of y is %d \n", x);
    printf("The value of y is %d \n", ++x);
    printf("The value of y is %d \n", x--);
    printf("The value of y is %d \n", --x);
    printf("\n");
    return 0;
}