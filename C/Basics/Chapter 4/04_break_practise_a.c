#include <stdio.h>
// A simple demonestration of 'Break' function in for loop.

int main()
{

    int i;

    printf("\n");

    for (i = 0; i <= 1000; i++)
    {
        printf("%d \n", i);
        if (i == 10)
        {
            break;
        }
    }
    printf("\n");
    return 0;
}