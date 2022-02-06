// C++ program to illustrate function overloading

/* Function overloading is a feature of object oriented programming where two or more functions
    can have the same name but different parameters. */

#include <iostream>
using namespace std;

void print(int i)
{
    cout << " Here is int " << i << endl;
}
void print(double f)
{
    cout << " Here is float " << f << endl;
}
void print(char const *c)
{
    cout << " Here is char* " << c << endl;
}

int main()
{
    print(10);
    print(10.10);
    print("ten");
    return 0;
}
