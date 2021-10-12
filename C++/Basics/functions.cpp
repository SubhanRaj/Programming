// Functions in C++

#include <iostream>
using namespace std;

int sum(int a, int b); // function prototype
// int a and int b are formal parameters
int main()
{
    int num1, num2;
    cout << "\n*** Functions in C++ ***\n"
         << endl;
    cout << "Enter Number 1: " << endl;
    cin >> num1;
    cout << "Enter Number 2: " << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "Sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl; // function call

    return 0;
}
int sum(int a, int b) // Function definition
{
    int c = a + b;
    // Formal parameters a & b are taking values for actual parameters num1 & num2
    return c;
}