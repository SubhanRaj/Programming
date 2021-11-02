/* Illustrate the concept of function overloading using swap() function
    which swaps two integers, two doubles and two characters data types.*/

#include <iostream>
using namespace std;
class Swap // class swap
{
public:                       // public member functions
    void swap(int &a, int &b) // swap function for swapping two integers
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void swap(double &a, double &b) // swap function for swapping two doubles
    {
        double temp;
        temp = a;
        a = b;
        b = temp;
    }
    void swap(char &a, char &b) // swap function for swapping two characters
    {
        char temp;
        temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    cout << "\n C++ Program to illustrate the concept of function overloading using swap() function\n";
    int a, b;    // declaring two integers
    double c, d; // declaring two doubles
    char e, f;   // declaring two characters
    cout << "\n Enter the value of two integers a and b: ";
    cin >> a >> b; // taking input from user
    cout << "\n Enter the value of two doubles c and d: ";
    cin >> c >> d;
    cout << "\n Enter the value of two characters e and f: ";
    cin >> e >> f;
    Swap s;                         // creating object of class Swap
    cout << "\n Before swapping: "; // printing before swapping
    cout << "\n a = " << a << "\t b = " << b<<endl;
    cout << "\n c = " << c << "\t d = " << d;
    cout << "\n e = " << e << "\t f = " << f;
    s.swap(a, b);                  // calling swap function for swapping two integers
    s.swap(c, d);                  // calling swap function for swapping two doubles
    s.swap(e, f);                  // calling swap function for swapping two characters
    cout << "\n After swapping: "; // printing after swapping
    cout << "\n a = " << a << "\t b = " << b<<endl;
    cout << "\n c = " << c << "\t d = " << d<<endl;
    cout << "\n e = " << e << "\t f = " << f<<endl;

    return 0;
}