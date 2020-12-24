#include <stdio.h> 

// This is a decrementing for loop

int main(){

    int i = 5;

    printf("\n");

    for (i=5; i; i--)
    {
        printf(" %d \n", i);
    }
    
    return 0;
}