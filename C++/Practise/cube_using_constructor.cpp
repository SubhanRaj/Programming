// C++ Program to find cube of any number using constructor which takes input from user
#include <iostream>
using namespace std;

class Cube

{
public:
    Cube()
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        cout << "Cube of " << n << " is " << n * n * n << endl;
    }
};

int main()
{
    Cube c;
    return 0;
}