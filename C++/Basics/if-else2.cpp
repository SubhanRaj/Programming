// if-else in C++
#include <iostream>
using namespace std;

int main()
{
    int age; //Declaring  variables

    cout << "\nEnter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You are a kid and you'll get a kid pass to the party" << endl;
    }
    else
    {
        cout << "You can come to the party" << endl;
    }
    return 0;
}