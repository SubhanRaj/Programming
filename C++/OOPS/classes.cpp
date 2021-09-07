// C++ program for implementing classes and creating objects
#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // Declaring member function
    void getData()
    {
        cout << "\nThe Value of a is " << a << endl;
        cout << "\nThe Value of b is " << b << endl;
        cout << "\nThe Value of c is " << c << endl;
        cout << "\nThe Value of d is " << d << endl;
        cout << "\nThe Value of e is " << e << endl;
    }

}; //Terminating class

void Employee ::setData(int a1, int b1, int c1) // Defining member function
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee Subhan;
    Subhan.setData(1, 2, 4);
    Subhan.d = 5;
    Subhan.e = 6;
    Subhan.getData();

    return 0;
}