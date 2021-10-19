/* Write a probram with a mother class animal. I
nside it define a name and an age variables, and set_value() function.
Then create two bases variables Zebra and Dolphin which write a message telling the age,
 the name and giving some extra information (e.g. place of origin). */

#include <iostream>
using namespace std;
class Animal // Defaining motherclass Animal
{
public:
    string name;                         // Defining string type name variable for storing name
    int age;                             // Defining int type age variable for storing age
    void set_value(string name, int age) // set_value function for defining name and age
    {
        this->name = name; // using 'this' pointer to access name variable
        this->age = age;   // using 'this' pointer to access age variable
    }
};
class Zebra : public Animal // Declaring class Zebra which inherits from Animal
{
public:
    void print_info()
    {
        cout << "Zebra: " << name << " " << age << " years old" << endl; // Printing Zebra info
    }
};
class Dolphin : public Animal // Declaring class Dolphin which inherits from Animal
{
public:
    void print_info()
    {
        cout << "Dolphin: " << name << " " << age << " years old" << endl;
    }
};
int main()
{
    Zebra zebra;                     // Declaring Zebra object
    zebra.set_value("Zebra", 5);     // Setting Zebra object's name and age
    zebra.print_info();              // Printing Zebra info
    Dolphin dolphin;                 // Declaring Dolphin object
    dolphin.set_value("Dolphin", 3); // Setting Dolphin object's name and age
    dolphin.print_info();            // Printing Dolphin info
    return 0;
}
