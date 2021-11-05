/* C++ program to explain how the constructor and destructor are involved when a derived 
class object is created and destroyed. */

#include <iostream>
using namespace std;

class Constructor // base class
{
    int a;

public:
    Constructor() // creating a constructor
    {
        cout << "Constructor is called" << endl;
    }
    
};
class Destructor : public Constructor // derived class
{
    public:
    ~Destructor() //
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Destructor obj;
    return 0;
}