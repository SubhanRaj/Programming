// C++ program to show difference between inheritance and containership

/*  When an object of one class is created into another class then that object will be a member of that class, 
    this type of relationship between the classes is known as containership or has_a relationship 
    as one class contains the object of another class.
*/

/* When an object of one class is created into another class then that object will be a member of that class, 
    this type of relationship between the classes is known as inheritance or is_a relationship 
    as one class is the parent of another class.
*/
// C++ program to show difference between inheritance and containership
#include <iostream>
using namespace std;

// Base and derived class to demonstrate the concept of inheritance
// In this we use input class as base class and Multiplication class as derived class

class Input
{

public:
    int a, b;
    void get_data()
    {
        cout << "Enter a and b : ";
        cin >> a >> b;
    }
};
class Multiplication : public Input
{
public:
    void display()
    {
        cout << "\nMultiplication of a and b is: " << a * b << endl;
    }
};

// Class Computer Science that will be contained

class ComputerScience
{
    public:
    void display()
    {
        cout <<" \nThe Subject of Computer Science are: " << endl;
        cout <<" 1. Programming " << endl;
        cout <<" 2. Algorithms " << endl;
        cout <<" 3. Data Structures " << endl;
        cout <<" 4. Operating Systems " << endl;
        cout <<" 5. Database Management Systems \n" << endl;

    }
};

// Now we will create a class name Subject, that will have subject of compouter science

class Subject
{
    public:
    ComputerScience cs;
};

// Driver code

int main()
{
    // Create an object of Derived class
    Multiplication m;
    // Calling the functions of derived class
    m.get_data();
    m.display();
    // Create an object of class Subject
    Subject s;
    // Call the display function of class Subject
    s.cs.display();
    return 0;
}



