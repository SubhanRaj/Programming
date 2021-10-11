#include <iostream>
// Pointers in C++

/*
    Pointer: It's simply a data type.A pointer is a variable that holds the address of another variable.
    There are many  types of pointers like
        1. Pointer to Pointer: A pointer to a pointer.
        2. Pointer to a Function: A pointer to a function.
        3. Pointer to a Class: A pointer to a class.
        4. Pointer to an Array: A pointer to an array.
        5. Pointer to a Structure: A pointer to a structure.
        6. Pointer to a Union: A pointer to a union.
        7. Pointer to a File: A pointer to a file.
        8. Pointer to a Variable: A pointer to a variable.
        9. Pointer to a Constant: A pointer to a constant.
        10. Pointer to a Label: A pointer to a label.
        11. Pointer to a Macro: A pointer to a macro.  
    There are two operattors

        1. & --> Address of operator
        2. * --> Dereference operator

*/
using namespace std;
void address_of();
void dereference_operator();

int main()

{
    // use of address of operator for getting the address of a variable
    address_of();
    // use of dereference operator for getting the value of a variable
    dereference_operator();

    return 0;
}

void address_of()
{
    // We can use address of operator to get the address of a variable as follows

    // First we create an integer variable
    int a;
    cout << "Enter a number: ";
    cin >> a;
    // Now we create a pointer variable
    int *ptr;
    // Now we assign the address of a to ptr
    ptr = &a;
    // We can also print the value of the address of ptr
    cout << "The value of the address of ptr is: " << &ptr << endl;
}

void dereference_operator()
{
    // We can use dereference operator to get the value of a variable as follows

    // First we create an integer variable
    int a;
    cout << "Enter a number: ";
    cin >> a;
    // Now we create a pointer variable
    int *ptr;
    // Now we assign the address of a to ptr
    ptr = &a;
    // Now we print the value of *ptr
    cout << "The value of variable store in *ptr is: " << *ptr << endl;
}