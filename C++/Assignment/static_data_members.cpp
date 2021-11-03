/* Explain with an example, the role of static data members in a class
 to count the number of objects created in the program.*/

#include <iostream>
#include <string>
using namespace std;

class test
{
    int code;
    static int count;

public:
    void setcode()
    {
        code = ++count;
    }
    void showcode()
    {
        cout << "Object Number: " << code << endl;
    }
    static void showcount()
    {
        cout << "Total Objects: " << count << endl;
    }
};

int test::count;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}