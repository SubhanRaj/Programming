// C++ program to demonstrate the use of abstract class

#include <iostream>
using namespace std;

// An abstract class with pure virtual functions
class Shape
{
public:
    // pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle::draw()" << endl;
    }
};

class Rectangle : public Shape
{
    void draw()
    {
        cout << "Rectangle::draw()" << endl;
    }
};

int main()
{
    Shape *shape;
    Circle c;
    Rectangle r;

    shape = &c;
    shape->draw();

    shape = &r;
    shape->draw();

    return 0;
}