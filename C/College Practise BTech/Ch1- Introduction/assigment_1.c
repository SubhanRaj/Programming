// A C program to find greatest between 3 user inputted Values Using Conditional Operators 
// Author - Subhan Raj
// Git- https://www.github.com/subhanraj

#include <stdio.h>

int main()
{

    int n1, n2, n3, max;
    printf("\n");
    printf("Enter Number a- ");
    scanf("%d", &n1);
    printf("Enter Number b- ");
    scanf("%d", &n2);
    printf("Enter Number c- ");
    scanf("%d", &n3);
    printf("\n");

    // Below is conditional operator

    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    // Print the largest number

    printf("Largest number among %d, %d and %d is %d.", n1, n2, n3, max);
    printf("\n");

    return 0;
}