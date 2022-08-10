#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	double Mass = 0;
	double Weight = 0;

	cout << "Plz enter the mass of object: ";
	cin >> Mass;
	if (Mass > 1000)
	{
		cout << "Object is too heavy" << endl;
	}
	else if (Mass < 10)
	{
		cout << "Object is too light" << endl;
	}
	else
	cout << "Entered mass of the object is: " << Mass << "newtons" << endl;
	Weight = Mass * 9.8;

	cout << "Weight of the object is: " << Weight << "kilograms" << endl;
}