// Data types in C++

#include <iostream>

using namespace std;
int glo = 100; //this glo is a global variable

// Declaring Local Variable

void fun()
{
    int a = 100; //here a is a local variable for this function
    cout << a + glo << endl;
}

int main()
{
    int a = 14; // This is how we declare variables in C++
    int b = 20;

    // Printing a statement and variables

    cout << "This is how we we print variables.\n"; // '\n' is a escape sequesnce to insert a new line.
    cout << "The value of a is " << a << " & the value of b is " << b << ".\n";

    // We can also decare multiple variables in single line using ','

    int c = 10, d = 25;
    int sum = a + b + c + d;

    cout << "Here we are printing the value of sum , which is the sum of a, b,c and d.\n";
    cout << "Sum will be " << sum << "." << endl; // 'endl' is used to used to insert a new line character and flush the stream

    float pi = 3.14;

    float area = 10 * 3.14 * 3.14;

    cout << "Area of a cirle of radius 10 unit will be " << area << " Unit." << endl;

    char ch = 'A'; //Char in C++

    cout << ch << "\n";

    // Using local and global variables togetther

    cout << sum + glo << "\n"; //This will add value of glo in sum

    // Calling a function

    fun(); // This uses gloabl variable 'glo' as there is no local variable in fun() 

}