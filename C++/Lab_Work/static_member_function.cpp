// C++ program to show the concept of static member function

/* The static member functions are special functions used to access the static data members or other static member functions.
    A member function is defined using the static keyword.
    A static member function shares the single copy of the member function to any number of the class' objects.
    We can access the static member function using the class name or class' objects.
    If the static member function accesses any non-static data member or non-static member function, it throws an error.
*/

#include <iostream>
using namespace std;

class Test
{
public:
    static int count;
    Test()
    {
        count++;
    }
    static void display()
    {
        cout << "Total objects created: " << count << endl;
    }
};

// Initialize the static member variable
int Test::count = 0;

int main()
{
    // Ask for number of objects to be created
    int n;
    cout << "Enter number of objects to be created: ";
    cin >> n;
    // Use for loop to create objects
    for (int i = 0; i < n; i++)
    {
        Test t;
    }
    Test::display();

    return 0;
}
