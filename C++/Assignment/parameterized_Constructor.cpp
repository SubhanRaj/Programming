// parameterized constructor in C++

#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    Point p1(10, 15);
    cout << "x = " << p1.getX() << endl;
    cout << "y = " << p1.getY() << endl;
    return 0;
}