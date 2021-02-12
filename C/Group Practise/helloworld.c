// This is a Sample hello World C Program
/* File name: HelloWorld.c */
/* Author: Subhan Raj*/

#include <stdio.h>

int main()
{

    int num;
    float number, sum;
    printf("\n");
    printf("Hello World \n");

    printf("This is a sample C program \n");
    printf("Enter any int-");
    printf("\n");
    scanf("%d", &num);
    printf("Enter any float-");
    scanf("%f", &number);

    sum = num + number;
    printf("The value of int %d and float %f is collectively %f \n", num, number, sum);
    sum = num - number;
    printf("The value of int %d and float %f is collectively %f \n", num, number, sum);
    sum = num / number;
    printf("The value of int %d and float %f is collectively %f \n", num, number, sum);
    sum = num * number;
    printf("The value of int %d and float %f is collectively %f \n", num, number, sum);
    printf("\n");

    return 0;
}
// %d - Integer type 
// %f- float
// %c - character