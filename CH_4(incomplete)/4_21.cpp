#include<iostream>
using namespace std;
int main()
{
	// For calculating the distance of medium
	const float Carbn = 258.0,
		Air = 331.0,
		Helium = 972.0,
		hydrigen = 1270.0;
	int t;
	int choices;
	cout << "1: Carbon Dioxide" << endl;
	cout << "2: Air " << endl;
	cout << "3: Helium " << endl;
	cout << "4: Hydrogen " << endl;
	cout << "Plz! enter one of the above choices:" << endl;
	cin >> choices;
	cout << "Enter the no. of secs" << endl;
	cin >> t;
	if (t < 0 || t>30)
		cout << "Error occurred" << endl;
	else {
		if (choices == 1)
			cout << Carbn * t << endl;
		else if (choices == 2)
			cout << Air * t << endl;
		else if (choices == 3)
			cout << Helium * t << endl;
		else if (choices == 4)
			cout << hydrigen * t << endl;
	}
		 return 0;
}