// A simple demonestration of 'Break' function in do-while loop.

// #include <stdio.h>

// int main()
// {

//     int i = 0;
//     printf("\n");

//     do
//     {
//         printf("The value of 'i' is %d \n", i);
//         i++;
//     } while (i <= 10);
//     printf("\n");

//     return 0;
// }

// This is what a do-while, while of for loop do normally.

// But if we put a {break} statement, this happens-

#include <stdio.h>

int main()
{

    int i = 0;
    printf("\n");

    do
    {
        printf("The value of 'i' is %d \n", i);
        if (i == 5)
        {
            break;
        }
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}

// Now it only prints values till it's equal to 5.