// C++ program to demonstrate Function overloading

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
    void exit(int e)
    {
        cout << "Thank you for using our service" << endl;
        exit(0);
    }

};            // end of class Kitchen
void choice() // function to display menu
{
    int ch;
    Kitchen Lunchbox; // object of class Kitchen

    do // do-while to run the program till the user wants to exit
    {
        cout << "\nWhat you want for Lunch?" << endl;
        cout << "Enter 1 for Breakfast,2 for lunch, 3 for Snacks, 4 for exit" << endl;
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
        case 4:
            cout << "exit";
            break;

        default:
            cout << "Invalid Choice" << endl;
        }
    } while (ch != 4); // end of switch case
}
int main() // main function
{
    choice(); // calling function choice
    return 0;
}