/* Explain the working of Inline Function */

#include <iostream>
using namespace std;

inline float mul(float x, float y) // decalring and definingi inline function
{
    return (x * y);
}

inline double div(double p, double q)
{
    return (q / p);
}

int main()
{
    cout << "C++ program to demonstrate inline function" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Enter two numbers: ";
    float a, b;
    cin >> a >> b;
    cout << "Multiplication of " << a << " and " << b << " is " << mul(a, b) << endl;
    cout << "Division of " << a << " and " << b << " is " << div(a, b) << endl;
    return 0;
}
