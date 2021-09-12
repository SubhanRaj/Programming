// C++ program to demonstrate Function overriding by various methods

#include <iostream>

using namespace std;

void ptr() // Shows function overriding by using Pointer method
{
    cout << "\n Function Overriding by using virtual function and pointer\n";
    class Base
    {
    public:
        virtual void fn()
        {
            cout << "\n Function of base class\n";
        }
    };

    class Derived : public Base
    {
    public:
        void fn()
        {
            cout << "Function of derived class\n";
        }
    };
    Derived d;
    Base *b = &d;
    b->fn();
};

void scope()
{
    cout << "\n Function Overriding by dot & Scope resolution operator\n";
    class Base
    {
    public:
        void fn()
        {
            cout << "\n Function of base class\n";
        }
    };

    class Derived : public Base
    {
    public:
        void fn()
        {
            cout << "Function of derived class\n";
        }
    };
    Derived d, d1;
    d.fn();
    d1.Base ::fn();
}

int main()
{
    ptr();
    scope();
    return 0;
}
