// C++ Program to add two numbers without using Arthematic Operaots and taking Input form the user

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, i; // Declaring the variables
    cout << "Enter the first number: " ;cin >> num1; // Taking the input from the user
    cout << "Enter the second number: " ;cin >> num2;
    for (i = 0; i < num2; i++) // Loop to add the numbers
    {
        num1++; 
    }
    cout << "Sum of two numbers is: " << num1;
}