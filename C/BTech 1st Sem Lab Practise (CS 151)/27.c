// Question27. WAP to swap two elements using the concept of pointers.
/* Objective :To create a c program to swap two elements using the concept of pointers.


/*---------------Code---------------*/

//C program to swap two elements using the concept of pointers.
//Author: Subhan Raj
#include <stdio.h>

int main()
{

    int a, b;
    int *ptra, *ptrb;
    int temp;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("\n\nEnter value for b: ");
    scanf("%d", &b);

    printf("\n\nThe values before swapping are: a = %d b = %d \n", a, b);

    ptra = &a; // to store the location of a
    ptrb = &b; // to store the location of b

    temp = *ptra;  // temp stores the value at location ptra
    *ptra = *ptrb; // assigning value at location  ptrb to ptra
    *ptrb = temp;  // assign value of themp to  the variable at location ptrb

    printf("\n\nThe values after swapping are: a = %d b = %d \n", a, b);

    return 0;
}
