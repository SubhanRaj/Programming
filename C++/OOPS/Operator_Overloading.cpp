#include <iostream>
using namespace std;
class Addition // Creating a class addition for addition operator overloading
{
public: // public member functions
    int a = 10, b = 6; 
    int c = a + b; // using '+' operator for addition

    void out() // function for output
    {
        cout << c << endl;
    }
};
class Concat // Creating a class concat for concatenation operator overloading

{
public:

    string first_name = "SAHIBA"; // string variable for first name
    string second_name = "NOOR"; // string variable for second name
    void cat() // function for concatenation
    {
        string full_name = first_name + second_name; // concatenation of two strings
        cout << full_name << endl; 
    }
};
int main() // main function
{
    Addition obj1; // object of class Addition
    Concat obj2; // object of class Concat
    obj1.out(); // calling function out()
    obj2.cat(); // calling function cat()
    return 0;
}