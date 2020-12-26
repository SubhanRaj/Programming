#include <stdio.h>

// A simple example of continue statement.

int main()
{

    int i = 0;
    int skip = 5;

    printf("\n");

    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d \n", i);
        }
    }
    printf("\n");

    return 0;
}