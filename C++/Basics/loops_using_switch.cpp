// Loops in C++

/*
There are 3 types of Loops in C++
    1. for loop
    2. while loop
    3. do-while loop
*/

#include <iostream>

using namespace std;

void for_loop();      // Function prototype for for loop
void while_loop();    // Function prototype for while loop
void do_while_loop(); // Function prototype for do-while loop
int main()
{
    int ch;
    cout << "\nThis program prints Number upto n using for, while and do-while loop\n";
    cout << "Enter 1 for 'for' loop, 2 for 'while' loop & 3 for 'do-while' loop" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        for_loop();
        break;
    case 2:
        while_loop();
        break;
    case 3:
        do_while_loop();
        break;

    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

void for_loop()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}
void while_loop()
{
    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}
void do_while_loop()
{

    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);
}
