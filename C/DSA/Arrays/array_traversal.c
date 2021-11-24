// C program to read and display 'n' numbers using an array

#include <stdio.h>

int main()
{
    int i, n, arr[100];
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}