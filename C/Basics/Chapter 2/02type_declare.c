#include <stdio.h>
// A simple programm for understanding Type of C Instructions but it takes inpur from users

int main()
{
    int a;   // Type declaration instruction
    int b;   // Type declaration instruction
    int c;   // Type declaration instruction
    float d; //Type declaration instruction

    printf("\n");
    printf("Enter an integer for a-\n");
    scanf("%d", &a);
    printf("Enter an integer for b-\n");
    scanf("%d", &b);
    printf("Enter an integer for c-\n");
    scanf("%d", &c);
    printf("Enter a real variable for d-\n");
    scanf("%f", &d);

    printf("\n");
    printf("The value of numbers entered as Integer a is %d \n,", a);
    printf("\n");
    printf("The value of number entered as Integer b is %d\n", b);
    printf("\n");
    printf("The value of number entered as Integer c is %d\n", c);
    printf("\n");
    printf("The value of number entered as variable d is %f\n", d);
    printf("\n");

    return 0;
}