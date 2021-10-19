// C++ program to show static and non-static function
#include <iostream>
using namespace std;
class Demo
{
public:
    int count = 0;

public:
    void get_count()
    {
        count++; // here as count is not static the output will be 1,1,1
    }
    void show_count()
    {
        cout << count << endl;
    }
};

int main()
{
    Demo o1, o2, o3; // here as count is not static the output will be 1,1,1
    o1.get_count();
    o2.get_count();
    o3.get_count();
    o1.show_count();
    o2.show_count();
    o3.show_count();

    return 0;
}