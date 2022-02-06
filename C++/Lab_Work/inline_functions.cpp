// C++ program to show the concept of inline functions
#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    Test(int i, int j)
    {
        a = i;
        b = j;
    }
    int add()
    {
        return a + b;
    }
};

int main()
{
    Test t(10, 20);
    cout << "Sum of two numbers is: " << t.add() << endl;
    return 0;
}