// Implementation of Bubble Sort alogrithm in C

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[100]; // Array to store unsorted elements

    int n; // Size of the array

    int i, j; // Number of elements in the array

    int temp; // Loop variable

    int flag = 1; // Flag to check if the array is sorted

    // Read the number of elements in the array
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Loop until the array is sorted
    while (flag)
    {
        // Set the flag to 0
        flag = 0;
        /*  */
        // Loop through the array
        for (i = 0; i < n - 1; i++)
        {
            // If the current element is greater than the next element
            if (arr[i] > arr[i + 1])
            {
                // Swap the elements
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                // Set the flag to 1
                flag = 1;
            }
        }
    }

    // Print the sorted array
    printf("The sorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}