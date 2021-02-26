// Question: Write a program to to find the greatest of three numbers.

// Objective: To create a C program that finds the greatest of three numbers.

/*---------------Code---------------*/
// A C program that finds the greatest of three numbers.
// Author: Subhan Raj
#include <stdio.h>

int main()
{

    int n1, n2, n3, max;
    printf("\n");
    printf("This C program finds the greatest of three numbers.\n");
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
// Output of the Above program-

/*This C program finds the greatest of three numbers.
Enter Number a- 1654
Enter Number b- 6935
Enter Number c- 3697

Largest number among 1654, 6935 and 3697 is 6935.*/
