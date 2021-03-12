#include <stdio.h> 
/* C program to print the address of a variable, use this address to get the value of this variable */
// Author: Subhan Raj

int main(){
    int a;
    int *ptr;
    ptr = &a;
    printf("\nEnter the Value of a : ");
    scanf("%d", &a);
    printf("\nThe address of variable a is %u", ptr);
    printf("\nThe value of variable a is %d\n", *ptr);

    return 0;
}