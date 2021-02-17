#include <stdio.h>
// A C Program for practising functions
// Author: Subhan Raj
// Git: www.gihthub.com/SubhanRaj

// A Simple Function
void display(); /* Function Prototype Declaration */

int main()
{

    int a;

    printf("\n");
    printf("Initializing Display Function in \n");
    printf("1... \n");
    printf("2... \n");
    printf("3... \n");
    printf("Nearly There \n");
    printf("\n");

    display(); /* Function Call */
    printf("Function call initialization sucessful\n");
    printf("\n");

    return 0;
}

void display() /* Function Defination */
{
    printf("Hi, I'm Display Function \n");
}