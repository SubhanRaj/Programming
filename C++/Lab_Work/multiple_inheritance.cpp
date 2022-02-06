// C++ program to demonstrate multiple inheritance
/* In multiple inheritance, a class can inherit from more than one base class.
   In this program we have created a class C which inherits from two base classes A and B.
*/
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "A::display()" << endl;
    }
};
class B
{
public:
    void display()
    {
        cout << "B::display()" << endl;
    }
};

// Now C will inherit from both A and B

class C : public A, public B
{
public:
    void display()
    {
        cout << "C::display()" << endl;
    }
};

int main()
{
    C c;
    c.display();
    c.A::display();
    c.B::display();
    return 0;
}