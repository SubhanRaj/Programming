/* Write a C++ program to define a class Complex with 
real and imaginary as data members an functions to read, add and display complex objects.*/

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void read()
    {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imaginary;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.read();
    c2.read();
    c3 = c1.add(c2);
    c1.display();
    c2.display();
    c3.display();

    return 0;
}