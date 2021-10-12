// Function call by reference example by swapping two variables using pointers

#include <iostream>
using namespace std;

void swapPointer(int *a, int *b);

int main()
{
    int a, b;
    cout << "C++ Program to swap two numbers by call by reference" << endl;
    cout << "Enter First number: " << endl;
    cin >> a;
    cout << "Enter Second number: " << endl;
    cin >> b;
    cout << "Number before swaping are: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapPointer(&a, &b); // call by reference by passing address of a and b
    cout << "Number after swaping are: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
// Call by reference using pointer
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};
