#include <stdio.h>
// Bitwise operators in C Language
// This Shifts data bits to the left
// Author: Subhan Raj

int main(){
    
    int a, b, c;

    printf("\n");
    printf ("Enter a- ");
    scanf ("%d", &a);
    printf("Enter c- ");
    scanf("%d", &c);

    b = a << c;
    
    printf ("Value of b is %d \n", b);
    printf("\n");
    return 0;
}