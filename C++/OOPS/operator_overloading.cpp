// C++ program to demonstrate operator overloading

#include <iostream>
using namespace std;

class Kitchen // creating class Kitchen

{
public: // public members of class Kitchen
    void breakFast(int b)
    {
        cout << "Box wiil have some sweets and bread-butter" << endl;
    }

public:
    void lunch(int l)
    {
        cout << "Box wiil have light meal" << endl;
    }

public:
    void snaks(int s)
    {
        cout << "Box wiil have biscuts" << endl;
    }
};            // end of class Kitchen
void choice() // function to display menu
{
    int ch;
    Kitchen Lunchbox; // object of class Kitchen
    cout << "What you want for Lunch?" << endl;
    cout << "Enter 1 for Breakfast,2 for lunch, 3 for Snacks" << endl;
    cin >> ch;
    switch (ch) // switch case to select choice
    {
    case 1:
        Lunchbox.breakFast(1);
        break;
    case 2:
        Lunchbox.lunch(2);
        break;
    case 3:
        Lunchbox.snaks(3);
        break;
    default:
        cout << "Invalid Choice" << endl;
    } // end of switch case
}
int main() // main function
{
    choice(); // calling function choice
    return 0;
}