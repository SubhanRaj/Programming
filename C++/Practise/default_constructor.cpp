#include <iostream>
using namespace std;

class construct
{
public:
    int a, b;
    // Default Constructor
    construct()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    construct c;
    cout << "\na: " << c.a;
    cout << "\nb: " << c.b<<endl;
}