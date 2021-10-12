// Arrays in C++

#include <iostream>
using namespace std;

int main()
{
    // Declaring Array
    int marks[4] = {45, 65, 87, 97}; // We can declare an array by writing its return type, name and size
    // We can also declare and define an array in seprate lines as below
    int mathMarks[4];
    mathMarks[0] = 95;
    mathMarks[1] = 65;
    mathMarks[2] = 93;
    mathMarks[3] = 78;
    // We can use loop for input and output also

    int mark[10];
    for ( int i = 0; i < 10; i++){
        cout <<"Enter Marks "<<i+1<<" : ";
        cin >> mark[i];
    }
        

    // Arrays start form 0 index, so an array of 4 elements will have values upto 3
    // Printng Array

    // We can print arrays as follows
    // 1. By manually printing each element
    cout << "\nPrinting marks in array 'Marks' \n";
    cout << "Marks at 0 index is " << marks[0] << endl;
    cout << "Marks at 1 index is " << marks[1] << endl;
    cout << "Marks at 2 index is " << marks[2] << endl;
    cout << "Marks at 3 index is " << marks[3] << endl;

    // 2. We can use loops
    // a. using for loop
    cout << "\nPrinting marks in array 'mathMarks' using for loop \n";
    for (int i = 0; i < 4; i++)
    {
        cout << "The marks at index " << i << " is " << mathMarks[i] << endl;
    }
    // b. using while loop
    cout << "\nPrinting marks in array 'mathMarks' using while loop \n";
    int i = 0;
    while (i < 4)
    {
        cout << "The marks at index " << i << " is " << mathMarks[i] << endl;
        i++;
    }
    // c. using do while loop
    cout << "\nPrinting marks in array 'mathMarks' using do while loop \n";
    i = 0;
    do
    {
        cout << "The marks at index " << i << " is " << mathMarks[i] << endl;
        i++;
    } while (i < 4);

    return 0;
}