// C++ program to demonstrate single inheritance

#include <iostream>
using namespace std;

class Student // Create a base class names Student
{
    int rollno; // data members
    char name[20];

public:
    void getdata() // member function
    {
        cout << "Enter rollno: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
    }
    void display()
    {
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

class Project_submission : public Student // Create a derived class names Project_submission
{
    int marks;

public:
    void getdata()
    {
        Student::getdata(); // call base class member function
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        Student::display(); // call base class member function
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;            // Create an object of base class
    Project_submission p; // Create an object of derived class
    p.getdata();          // call member function of derived class
    p.display();
    return 0;
}