// C++ program to demonstrate single inheritance
// In this we use input class as base class and Multiplication class as derived class

#include <iostream>
using namespace std;

class Input
{

public:
    int a, b;
    void get_data()
    {
        cout << "Enter a and b : ";
        cin >> a >> b;
    }
};
class Multiplication : public Input
{
public:
    void display()
    {
        cout << "Multiplication of a and b is : " << a * b << endl;
    }
};

int main()
{
    Multiplication m;
    m.get_data();
    m.display();

    return 0;
}