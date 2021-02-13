// This C Program Generates Random Number.
// Author: Subhan Raj
// Git: https://github.com/SubhanRaj

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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