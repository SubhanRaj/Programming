// Write a C++ program to find the average of three numbers using the concepts of object oriented programming and taking input from the user.

#include <iostream>
using namespace std;

class avg
{
private:
    int a, b, c;

public:
    void get_data()
    {
        cout << "Enter the three numbers: ";
        cin >> a >> b >> c;
    }
    void display()
    {
        cout << "The average of " << a << ", " << b << " and " << c << " is " << (a + b + c) / 3 << endl;
    }
};

int main()
{
    avg obj;
    obj.get_data();
    obj.display();
    return 0;
}