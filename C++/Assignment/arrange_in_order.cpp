/* C++ program to sort & arrange an array of integers and floating point numbers in ascending order using functions */

#include <iostream>
using namespace std;

// Using function to sort an array of integers
void sort_int(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
// Using function to sort an array of floating point numbers
void sort_float(float *arr, int n)
{
    int i, j;
    float temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n, i;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array before sorting: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort_int(arr, n);
    cout << "The array after sorting: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    float arr1[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "The array before sorting: ";
    for (i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    sort_float(arr1, n);
    cout << "The array after sorting: ";
    for (i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}
