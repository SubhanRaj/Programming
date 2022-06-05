#include <iostream>
using namespace std;

/*  Constructor is a special member function with same name as of the class.
    It is used to initialize the objects of the class

    It is automatically invoked whenever an object is created
*/

class Complex
{
    int a, b;

public:
    Complex(void); // Constructor Declaration

    void printNumber()
    {
        cout << "\nYour Number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    // get data from user
    void getData();
    {
        cout << "\nEnter the real part of the number: ";
        cin >> a;
        cout << "\nEnter the imaginary part of the number: ";
        cin >> b;
    }
}

int main()
{
    
    int n;
    cout << "Enter the number of objects to be created of class Complex : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Complex c;
        c.printNumber();
    }

    return 0;
}