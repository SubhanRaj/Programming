// Question23. WAP to search an element in an array using Linear Search.
/* Objective :To create a c program to search an element in an array using Linear Search.*/

/*---------------Code---------------*/

//Author: Subhan Raj
#include <stdio.h>

int main()
{
    int a[20], i, x, n;
    printf("\nHow many elements?");
    scanf("%d", &n);

    printf("\nEnter array elements:n ");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    printf("\nEnter element to search:");
    scanf("%d", &x);

    for (i = 0; i < n; ++i)
        if (a[i] == x)
            break;

    if (i < n)
        printf("\nElement found at index %d\n", i);
    else
        printf("\nElement not found\n");

    return 0;
}
