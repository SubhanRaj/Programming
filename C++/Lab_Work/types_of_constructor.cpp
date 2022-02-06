// C++ program to show all types of constructor and destructor

/* A constructor is a special type of member function of a class which initializes objects of a class.
    In C++, Constructor is automatically called when object(instance of class) create.
    It is special member function of the class because it does not have any return type.
*/

// Types of Constructor

/* 1. Default Constructor
   2. Parameterized Constructor
    3. Copy Constructor
*/

#include <iostream>
using namespace std;
// Class name "Default Constructor"
// Default constructor is a constructor which does not have any parameter.

class DefaultConstructor
{
public:
    DefaultConstructor()
    {
        cout << "Default Constructor" << endl;
    }
    ~DefaultConstructor()
    {
        cout << "Destructor for Default Constructor Called" << endl;
    }
};

// Class name "Parameterized Constructor"
// Parameterized constructor is a constructor which has parameter.

class ParameterizedConstructor
{
public:
    ParameterizedConstructor(int a)
    {
        cout << "Parameterized Constructor" << endl;
    }
    ~ParameterizedConstructor()
    {
        cout << "Destructor for Parameterized Constructor Called" << endl;
    }
};

// Class name "Copy Constructor"
// Copy constructor is a constructor which is used to copy the value of one object to another object.

class CopyConstructor
{
public:
    CopyConstructor(int a)
    {
        cout << "Copy Constructor" << endl;
    }
    CopyConstructor(const CopyConstructor &obj)
    {
        cout << "Copy Constructor" << endl;
    }
    ~CopyConstructor()
    {
        cout << "Destructor for Copy Constructor Called" << endl;
    }
};

// Main function
int main()
{
    // Create object of class "DefaultConstructor"
    DefaultConstructor obj1;
    // Create object of class "ParameterizedConstructor"
    ParameterizedConstructor obj2(10);
    // Create object of class "CopyConstructor"
    CopyConstructor obj3(10);
    // Calling destructor to delete the object

    return 0;
}
