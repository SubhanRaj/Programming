// if-else in C++

#include <iostream>

using namespace std;

void control();
void switch_case();
int main()
{
    int ch;
    cout << "\nA C++ program to learn if-else and switch case case\n";
    cout << "1 for if--else and 2 for switch" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "now it will run if-else control statement" << endl;
        control();
    }
    else
    {
        cout << "Now it will run Switch case" << endl;
    }
    return 0;
};

void control()
{
    int age;
    cout << "\nEnter age: ";
    cin >> age;
    if (age < 12)
    {
        cout << "\nKids not allowed" << endl;
    }
    else if ((age <= 12) && (age <= 17))
    {
        cout << "\nTeens need permission from parents first" << endl;
    }
    else if (age >= 18)
    {
        cout << "\nWelcome to the party" << endl;
    }
}
void switch_case()
{
}