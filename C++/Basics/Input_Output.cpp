// C++ Program to take input and output from user

#include <iostream>

using namespace std;

int main()

{
    int num1, num2;
    cout << "This program adds sum of two numbers:\n";
    cout << "Enter Num 1: ";
    cin >> num1;
    cout << "Enter Num 2: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "Sum of " << num1 << " and b " << num2 << " will be: " << sum << endl;

    return 0;
}