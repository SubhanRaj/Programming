#include <stdio.h>
// This program prints entire ASCII Table

int main(){
    
    int ch;

    printf("\n");
    printf("This program prints entire ASCII Table \n");

    for ( ch = 0; ch <= 255; ch++)
    printf("%d %c \n", ch, ch);
    printf("\n");
    return 0;
}