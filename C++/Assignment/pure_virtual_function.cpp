// Write a C++ program demonstrating use of pure virtual function.

#include <iostream>
using namespace std;

class Shape // base class
{
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape // derived class
{
public:
    void draw() // overridding the pure virtual function
    {
        cout << "Circle::draw()" << endl; // implementation of the pure virtual function
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
