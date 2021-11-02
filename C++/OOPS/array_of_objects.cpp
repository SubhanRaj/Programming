// C++ program to demonstrate Array of Objects

#include <iostream>
using namespace std;

class Emp
{
public:
    int id;
    int sal;

    int get_id(int a, int b);
    void set_sal();
};

int Emp::get_id(int a, int b){
    this -> id = a;
    this -> sal = b;

    ret
    
}                                            

int main()
{
    int i;
    Emp obj[50];
    for (i = 0; i < 50; i++)
    {
        obj[i].get_id();
        obj[i].set_sal();
    }

    return 0;
}