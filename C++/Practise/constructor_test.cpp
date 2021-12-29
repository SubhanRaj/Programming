#include <iostream>
using namespace std;

class Const
{
public:
	int a, b;

public:
	Const(int a, int b)
	{
		a = a;
		b = b;
		cout<<"Sum of the Number a and b:"<<a+b;
	}
};

int main()
{
	// Const(10,20);  //Without Object Creation 
	Const obj(10,20);
	// obj.a = 10;
	// obj.b = 20;
	// cout << obj.a << " " << obj.b << endl;
	return 0;
}
