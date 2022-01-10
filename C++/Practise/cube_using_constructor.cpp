// C++ Program to find cube of any number using constructor (default, parameterized & copy) which takes input from user
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
    // Now we will create a parameterized constructor
    Cube(int n)
    {
        cout << "Cube of " << n << " is " << n * n * n << endl;
    }
    // Now we will create a copy constructor
    Cube(Cube &obj)
    {
        cout << "Cube of " << obj.n << " is " << obj.n * obj.n * obj.n << endl;
    }
    // Now we will create a destructor
    ~Cube()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Calling default constructor
    Cube c;
    // Calling parameterized constructor
    Cube c1(5);
    // Calling copy constructor
    Cube c2(c1);

    return 0;
}