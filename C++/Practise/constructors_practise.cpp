/* Write a C++ program that defines a shape class with a constructor that gives value to width and height.
Then define two sub-classes triangle and rectangle, that calculate the area of the shape area().
In main, define two variables, a triangle and a rectangle, and then call the area() function in this two variables
*/

#include <iostream>
using namespace std;
class shape
{
protected:
    int width, height;

public:
    shape(int a, int b)
    {
        width = a;
        height = b;
    }
    int area()
    {
        return width * height;
    }
};
class triangle : public shape
{
public:
    triangle(int a, int b) : shape(a, b)
    {
    }
    int area()
    {
        return (width * height) / 2;
    }
};
class rectangle : public shape
{
public:
    rectangle(int a, int b) : shape(a, b)
    {
    }
    int area()
    {
        return width * height;
    }
};

int main()
{
    cout << "\n***C++ Program to Calculate the area of triangle and rectangle using constructors***\n";
    cout << "\nEnter the width and height of the triangle: ";
    int w, h;
    cin >> w >> h;
    triangle t(w, h);
    cout << "\nThe area of the triangle is: " << t.area() << endl;
    cout << "\nEnter the width and height of the rectangle: ";
    cin >> w >> h;
    rectangle r(w, h);
    cout << "\nThe area of the rectangle is: " << r.area() << endl;

    return 0;
}