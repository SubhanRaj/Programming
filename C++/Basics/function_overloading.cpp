// C++ program to show concept of function overloading

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "\nA Function that takes 2 arguments\n";
    return a + b;
    cout << endl;
}

int sum(int a, int b, int c)
{
    cout << "\nA Function that takes 3 arguments\n";
    return a + b + c;
    cout << endl;
}

int main()
{
    cout << "C++ program to demonstrae function overloading" << endl;
    int a, b, c;
    cout << "Enter 3 ints: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "The sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    cout << "The sum of " << a << "," << b << " and " << c << " is " << sum(a, b, c) << endl;

    return 0;
}
