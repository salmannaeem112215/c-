#include<iostream>
#include<string>
using namespace std;
int main() {
	                   // Running Race 
	string a, b, c;
		int time_a, time_b, time_c;
	cout << "Enter the names of participants which take part in race" << endl;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	cout << "Enter the racing time whicn they took " << endl;
	cin >> time_a >> time_b >> time_c;
	//Time Validation
	if (time_a < 0 || time_b < 0 || time_c < 0)cout << "Error Occurred!" << endl;
	else {
		if (time_a < time_b && time_a < time_c){
			cout <<a<< "is on First number!" << endl;
			if (time_b < time_c) {
				cout << b << "is on second number in race" << endl;
				cout << c << "is on third number " << endl;
			}
			else
			{
				cout << c << "is on second number" << endl;
				cout << b << "is on second number" << endl;
			}
		}
		if (time_b < time_a && time_b < time_c) {
			cout <<b<< "is on First number!" << endl;
			if (time_a < time_c) {
				cout << a << "is on second number in race" << endl;
				cout << c << "is on third number " << endl;
			}
			else
			{
				cout << c << "is on second number" << endl;
				cout << a << "is on third number" << endl;
			}
		}
		if (time_c < time_a && time_c << time_b) {
			cout << c<<"is on first number!" << endl;
			if (time_a < time_b) {
				cout << a << "is on second number in race" << endl;
				cout << b << "is on third number " << endl;
			}
			else
			{
				cout << b << "is on second number" << endl;
				cout << a << "is on third number" << endl;
			}
		}

	}
	return 0;
}