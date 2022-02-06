// C++ program to illustrate function overriding

/* If derived class defines same function as defined in its base class, it is known as function overriding in C++.
It is used to achieve runtime polymorphism. It enables us to provide specific implementation of the
function which is already provided by its base class. */

#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void Display()
    {
        cout << "\nThis is Display() method"
                " of BaseClass"<<endl;
    }
    void Show()
    {
        cout << "\nThis is Show() method "
                "of BaseClass"<<endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    // Overriding method - new working of
    // base class's display method
    void Display()
    {
        cout << "\nThis is Display() method"
                " of DerivedClass";
    }
};

// Driver code
int main()
{
    DerivedClass dr;
    BaseClass &bs = dr;
    bs.Display();
    dr.Show();
}
