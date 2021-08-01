// Arithmetic in C++ by taking the input from the user
#include <iostream>
using namespace std;
int main()
{
    // Declare variables
    int a, b, sum;
    // Get input
    cout << "Enter two numbers: ";
    cin >> a >> b;
    // Calculate sum
    sum = a + b;
    // Display result
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    cout << sizeof(sum) << endl;
    return 0;
}