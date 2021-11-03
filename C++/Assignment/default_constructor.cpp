/* Default constructor in C++ */

#include <iostream>
using namespace std;

class Construct
{
public:
    int a, b;
    Construct()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    Construct c;
    cout << "a: " << c.a << endl
         << "b: " << c.b << endl;
    return 1;
}