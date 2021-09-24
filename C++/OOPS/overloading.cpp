#include <iostream>
using namespace std;

class Area
{
public:
    void ar(int a)
    {
        cout << "\nArea of circle is " << 3.14 * a * a << endl;
    }

public:
    void ar(int l, int b)
    {
        cout << "\nArea of rectangle is " << l * b << endl;
    }
};
int main()
{
    Area obj;
    obj.ar(2);
    obj.ar(3, 5);
    return 0;
}