// C++ Program to add two numbers without using Arthematic Operaots and taking Input form the user

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, i;
    cout << "Enter the first number: " ;cin >> num1;
    cout << "Enter the second number: " ;cin >> num2;
    for (i = 0; i < num2; i++)
    {
        num1++;
    }
    cout << "Sum of two numbers is: " << num1;
}