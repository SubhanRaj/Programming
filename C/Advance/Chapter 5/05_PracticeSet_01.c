#include <stdio.h>
/* C program to find the average of three numbers using functions */
// Author : Subhan Raj

float avg (int a, int b, int c);
int main ()
{
    int a, b,c;
    printf("\nThis C program finds the average of three numbers using the concept of Functions.");
    printf("\nEnter Number a: ");
    scanf("%d", &a);
    printf("Enter Number b: ");
    scanf("%d", &b);
    printf("Enter Number c: ");
    scanf("%d", &c);
    printf("\nThe average of %d, %d and %d is %f\n", a, b,c, avg (a,b,c));

    return 0;
}

float avg(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3 ;
    return result;
} 