// C++ program to tell the name of the day depsind upon which day of week it is by using switch case

#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << "\nWhich day of week is today: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "\nToday is Monday which is the " << day << " day of the weak" << endl;
        break;
    case 2:
        cout << "\nToday is Tuesday which is the " << day << " day of the weak" << endl;
        break;
    case 3:
        cout << "\nToday is Wednesday which is the " << day << " day of the weak" << endl;
        break;
    case 4:
        cout << "\nToday is Thursday which is the " << day << " day of the weak" << endl;
        break;
    case 5:
        cout << "\nToday is Friday which is the " << day << " day of the weak" << endl;
        break;
    case 6:
        cout << "\nToday is Saturday which is the " << day << " day of the weak" << endl;
        break;
    case 7:
        cout << "\nToday is Sunday which is the " << day << " day of the weak" << endl;
        break;
    default:
        cout << "\nInvalid Input " << endl;
    }
    return 0;
}