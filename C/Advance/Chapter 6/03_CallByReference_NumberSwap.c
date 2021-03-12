#include <stdio.h>
/* This C program swaps the value of a and b using the concept of Call by reference and pointers */
// Author: Subhan Raj

void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("\nThis C program swaps the value of a and b using the concept of Call by reference and pointers");
    printf("\nEnter the Value of a : ");
    scanf("%d", &a);
    printf("\nEnter the Value of b : ");
    scanf("%d", &b);
    printf("\nThe value of a and b before swapping are a = %d, b = %d.\n", a, b);
    swap(&a, &b);
    printf("\nThe value of a and b after swapping are a = %d , b = %d.\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}