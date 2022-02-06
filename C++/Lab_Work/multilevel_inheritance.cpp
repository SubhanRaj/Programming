// C++ program to demonstrate multilevel inheritance
/* This prrogram takes 'n' numbers in inout class using get_data() function
    then add them in Addition class and then give average of numbers using Avg class
    and finally display the result using display() function.
*/
#include <iostream>
using namespace std;

class Input
{
public:
    // 'n' number of input
    int n;
    // Array for storing the numbers
    int Num[100];
    // Function to get the numbers
    void get_data()
    {
        cout << "Enter " << n << " numbers : ";
        for (int i = 0; i < n; i++)
        {
            cin >> Num[i];
        }
    }
};

class Addition : public Input
{
public:
    // Function to add the numbers
    void add()
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += Num[i];
        }
        cout << "Sum of numbers is : " << sum << endl;
    }
};

class Avg : public Addition
{
public:
    // Function to get the average
    void avg()
    {
        int avg = 0;
        for (int i = 0; i < n; i++)
        {
            avg += Num[i];
        }
        avg /= n;
        cout << "Average of numbers is : " << avg << endl;
    }
};

class Display : public Avg
{
public:
    // Function to display the result
    void display()
    {
        cout << "Result : " << endl;
        add();
        avg();
    }
};

int main()
{
    Display d;
    cout << "Enter the number of numbers : ";
    cin >> d.n;
    d.get_data();
    d.display();
    return 0;
}
