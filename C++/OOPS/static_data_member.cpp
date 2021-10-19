// C++ program to show static and non-static function
#include <iostream>
using namespace std;
class Demo
{
    static int count;

public:
    void get_count()
    {
        count++; //here as count is static output will be 1,2,3
    }
    void show_count()
    {
        cout << count << endl;
    }
};
int Demo::count = 0;

int main()
{
    Demo o1, o2, o3; //here as count is static output will be 1,2,3
    o1.get_count();
    o1.show_count();
    o2.get_count();
    o2.show_count();
    o3.get_count();
    o3.show_count();

    return 0;
}