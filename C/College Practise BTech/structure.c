/* Documentation Section */
// File : Addition.c
// Description : Addition of Three Numbers
// Author : Student123
/* Header File Section */
#include <stdio.h>
// #include <conio.h> Don't use <conio.h in GCC, it's only for Turbo-C Compiler.
/* Definition Section */
#define c 3
/* Global declaration section */
int calcsum(int,int,int);
/* main( ) section */
int main()
{
    /* Declaration part */
    int a, b, sum;
    /* Execution part */
    printf("Enter Two numbers");
    scanf("%d %d", &a, &b);
    sum = calcsum(a, b, c);
    printf("The sum is: %d", sum);
}
/* Sub program section*/
int calcsum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return d;
}