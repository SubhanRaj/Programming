// C++ program to show the concept of friend function.
/* A friend  friend function can be given a special grant to access private and protected members. */

#include <iostream>
using namespace std;

class base 
{
    protected:
        int a, b;
    public:
        void getdata()
        {
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
        }
        friend class Derived;
};

class Derived : public base
{
    public:
        void display()
        {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main()
{
    Derived d;
    d.getdata();
    d.display();
    return 0;
}