// Arthematic Operators in C++

#include <iostream>
using namespace std;

void arth()
{
    int i, j;
    // Arthematic Operators in C++
    cout << "Enter int i: ";
    cin >> i;
    cout << "Enter int j: ";
    cin >> j;
    cout << ("i+j= \n") << i + j << endl; // Addition
    cout << ("i-j= \n") << i - j << endl; // Substraction
    cout << ("i*j= \n") << i * j << endl; // Multiplication
    cout << ("i/j= \n") << i / j << endl; // Division
    cout << ("i%j= \n") << i % j << endl; // Modulus Division
}

void inc_dec()
{
    // Increment & decrement Operators
    int i;
    // Increment & Decrement Operators in C++
    cout << "Enter int i: ";
    cin >> i;
    cout << ("The Value of i++ is: ") << i++ << endl;
    cout << ("The Value of ++i is: ") << ++i << endl;
    cout << ("The Value of i-- is: ") << i-- << endl;
    cout << ("The Value of --i is: ") << --i << endl;
}

void logic()
{
    // Logical Operators in C++

    int i, j;
    cout << "Enter int i: ";
    cin >> i;
    cout << "Enter int j: ";
    cin >> j;
    cout << ("i==j is ") << (i == j) << endl;
    cout << ("i!=j is ") << (i != j) << endl;
    cout << ("i<=j is ") << (i <= j) << endl;
    cout << ("i>=j is ") << (i >= j) << endl;
    cout << ("i<j is ") << (i < j) << endl;
    cout << ("i>j is ") << (i > j) << endl;
}

int main()
{
    arth();
    inc_dec();
    logic();
    return 0;
}
