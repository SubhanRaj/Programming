// Constructors in C++
#include <iostream>
using namespace std;
class A
{
public:
    int x;

// public:
    A()
    {
        x = 10;
    }
    void disp(int x)
    {
        cout << "The value of X is: " << x << endl;
    }
};
int main()
{
    A obj;
    cout << obj.x << endl;
    obj.disp(20);

    return 0;
}