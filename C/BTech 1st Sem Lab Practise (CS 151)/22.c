// Question22. WAP to find the minimum and maximum element of the array.
/* Objective :To create a c program that find the minimum and maximum element of the array*/

/*---------------Code---------------*/

//Author: Subhan Raj
#include <stdio.h>

int main()
{
    int a[1000], i, n, min, max;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("\nMinimum element of Array is %d and \n", min);
    printf("Maximum element of Array is %d.\n", max);

    return 0;
}