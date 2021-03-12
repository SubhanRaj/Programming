/* Question 20. WAP that simply takes elements of the array from the user and finds the sum of these
elements.*/

/* Objective : To create a C program that simply takes elements of the array from the user and finds the sum of these
elements.*/

/*---------------Code---------------*/
// Author: Subhan Raj
#include <stdio.h>

int main()
{
    int a[1000], i, n, sum = 0;
    printf("\nEnter size of the array: ");
    scanf("%d", &n);
    printf("\nEnter elements in array ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        printf("\nSum of array is: %d\n", sum);
        break;
    }

    return 0;
}
