/* Role of static data member in a Class to count the number of objects created in the program */

#include <iostream>
using namespace std;

class item
{
    static int count ;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << "Count: ";
        cout << count << endl;
    }
};
int item::count;

int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout << "After reading data "
         << "\n";
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}