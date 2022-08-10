#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	double weight, distance, rate;
	cout << "                                                                         " << endl;
	cout << "                    *********************************                    " << endl;
	cout << "******************  The Fast Freight Shipping Company  ******************" << endl;
	cout << "                    *********************************                    " << endl;
	cout << "                                                                         " << endl;
	cout << "Plz enter the weight of package: ";
	cin >> weight;
	while (weight <= 0)
	{
		cout << "Enetered weight must be greater than 0" << endl;
		cin >> weight;
	}
	cout << "Plz enter the distance to be covered for package: " << endl;
	cin >> distance;
	while (distance < 10 || distance>3000)
	{
		cout << "Enetered distance must be greater than 10 or less than 3000: " << endl;
		cin >> distance;
	}
	if (weight <= 2)
	{
		rate = 1.10 / 500 * distance;
	}
	else if (2 < weight <= 6)
	{
		rate = 2.20 / 500 * distance ;
	}
	else if (6 < weight <= 10)
	{
		rate = 3.70 / 500 * distance;
	}
	else if (10 < weight <= 20)
	{
		rate = 4.80 / 500 * distance;
	}

	cout << showpoint << fixed << setprecision(2);
	cout << "The charges you have to pay are: " << rate <<endl;
}