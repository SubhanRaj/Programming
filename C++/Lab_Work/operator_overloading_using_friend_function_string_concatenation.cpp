// Write a C++ program to overload '+' operator to concatenate two strings using friend function.

#include <iostream>
#include <cstring>
using namespace std;

class Base
{
public:
    char st[100], st2[100];

    void inp()
    {
        cout << " Enter the first string: ";
        cin.getline(st, 100); // take a line of string with limit 100

        cout << " Enter the second string: ";
        cin.getline(st2, 100); // take a line of string with limit 100
    }
    friend void concat(Base &b);
};

void myfun(Base b)
{
    strcat(b.st, b.st2); // pass parameter to concatenate

    cout << " The concatenated string: " << b.st;
}

int main()
{

    Base b; // create b as an object

    b.inp();  // b object call inp() function
    myfun(b); // pass b object to myfun() to print the concatenated string

    return 0;
}
