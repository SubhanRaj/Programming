// This C Program Generators Random Number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    int number;

    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 to 100
    printf("\n");
    printf("The Number is %d \n", number);
    printf("\n");

    return 0;
}