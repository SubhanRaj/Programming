// A simple if statement C program

#include <stdio.h>
int main()
{
    int num;
    printf ("\nEnter a number less than 10- ");
    scanf ("%d", &num);

    if (num < 10)
    {
        printf ("\nHow Obdient you are \n");
    }
    else if (num >= 10)
    {
        printf("\nAre you fool?\n");
    }

    return 0;
}