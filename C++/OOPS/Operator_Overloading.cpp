#include <iostream>
using namespace std;
class Addition
{
public:
    int a = 10, b = 6;
    int c = a + b;

    void out()
    {
        cout << c << endl;
    }
};
class Concat

{
public:
    string first_name("SAHIBA ");
    string second_name("NOOR");
    void cat()
    {
        string ful_name = first_name + second_name;
        cout << ful_name << endl;
    }
};
int main()
{
    Addition obj1;
    Concat obj2;
    obj1.out();
    obj2.cat();
    return 0;
}