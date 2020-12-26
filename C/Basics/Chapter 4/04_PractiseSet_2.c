// A program to print multiplication table of 10 in reverse order.

#include <stdio.h> 

int main(){
    
    int i;

    printf("\n");

    printf("***Multiplication table of 10 in reverse order*** \n \n");

    for (i = 10; i ; i--)
    {
        printf("10 X %d  = %d \n", i, i*10);
    }

    printf("\n");

    return 0;
}