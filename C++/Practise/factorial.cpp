// Write a C++ program to calculate the factoraial of number by making a class and declaring member function 'factorial' outside that class.

#include <iostream>
using namespace std;
class Factorial
{

    long double num;

public:
    long double factorial(long double num);
};
long double Factorial::factorial(long double num)
{
    long double fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    Factorial fact;
    cout << "Factorial of " << num << " is " << fact.factorial(num) << endl;

    return 0;
}