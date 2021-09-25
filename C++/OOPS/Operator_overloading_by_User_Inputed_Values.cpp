#include <iostream>
// C++ program to demosnrate Operator Overloading from user given values

using namespace std;
class Addition // Creating a class addition for addition operator overloading
{
public: // public member functions
    int a, b;
     // using '+' operator for addition

    void out() // function for output
    {
        cout << "Enter int a " << endl;
        cin >> a;
        cout << "Enter int b " << endl;
        cin >> b;
        int c = a + b;
        cout << c << endl;
    }
};
class Concat // Creating a class concat for concatenation operator overloading

{
public:
    string first_name; // string variable for first name
    string second_name;  // string variable for second name
    void cat()                    // function for concatenation
    {
        cout << "Enter First Name " << endl;
        cin >> first_name;
        cout << "Enter Second Name " << endl;
        cin >> second_name;
        string full_name = first_name + second_name; // concatenation of two strings using '+' operator
        cout << full_name << endl;
    }
};
int main() // main function
{
    Addition obj1; // object of class Addition
    Concat obj2;   // object of class Concat
    obj1.out();    // calling function out()
    obj2.cat();    // calling function cat()
    return 0;
}