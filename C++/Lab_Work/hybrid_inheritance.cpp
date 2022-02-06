// C++ program to illustrate the concept of hybrid inheritance

#include <iostream>

using namespace std;
class arithmetic
{
protected:
    int num1, num2;

public:
    void getdata()
    {
        cout << "For Addition:";
        cout << "\nEnter the first number: ";
        cin >> num1;
        cout << "\nEnter the second number: ";
        cin >> num2;
    }
};
class add : public arithmetic
{
protected:
    int sum;

public:
    add()
    {
        sum = num1 + num2;
    }
};
class sub
{
protected:
    int n1, n2, diff;

public:
    sub()
    {
        cout << "\nFor Subtraction:";
        cout << "\nEnter the first number: ";
        cin >> n1;
        cout << "\nEnter the second number: ";
        cin >> n2;
        diff = n1 - n2;
    }
};
class result : public add, public sub
{
public:
    void display()
    {
        cout << "\nSum of " << num1 << " and " << num2 << " = " << sum;
        cout << "\nDifference of " << n1 << " and " << n2 << "= " << diff;
    }
};
int main()
{
    result z;
    z.getdata();
    z.display();
    return 0;
}
