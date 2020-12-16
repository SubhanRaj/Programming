#include <stdio.h>

int main()
{

    int i = 5;

    printf("\n");

    printf("The value of i after i++ is %d \n", i++);
    // --> i++ pahle print then increment
    // --> ++i pahle increment then print
    printf("&");
    printf("The value of ++i is %d \n", i);
    /* <----------------------------------->*/
    i+=100;
    printf("i = %d \n", i);
    /* <----------------------------------->*/
    printf("The value of i after i-- is %d \n", i--);
    // --> i-- pahle print then decrement
    // --> ++i pahle decrement then print
    printf("&");
    printf("The value of --i is %d \n", --i);

    printf("\n");

    return 0;
}