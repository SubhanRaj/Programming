// Write a C++ program demonstrating use of pure virtual function.

#include <iostream>
using namespace std;

class Shape
{
public:
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
public:
    void draw()
    {
        cout << "Rectangle::draw()" << endl;
    }
};


int main()
{
    Shape *shape = new Circle();
    shape->draw();

    shape = new Rectangle();
    shape->draw();

    return 0;
}

