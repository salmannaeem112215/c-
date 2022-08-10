#include<iostream>
#include<string>
using namespace std;

int main() {
	string name, address , city , state ,ZIPcode , collegeMajor;
	int telephoneNo;
	
	cout << "Enter the Name: ";
	getline(cin,name);

	cout << "Enter the Address: ";
	getline(cin,address);
	
	cout << "Enter the City: ";
	getline(cin,city);
	
	cout << "Enter the State: ";
	getline(cin,state);
	
	cout << "Enter the ZIP code: ";
	getline(cin,ZIPcode);
	
	cout << "Enter the Telephone No: ";
	cin >> telephoneNo;
	cin.ignore();
	cout << "Enter the College Major: ";
	getline(cin,collegeMajor);


	cout << "Name: " << name << endl;
	cout << "Address: " << address << ", " << city << ", "
		<< ", " << state << ", " << ZIPcode << endl;
	cout << "Telephone No: " << telephoneNo << endl;
	cout << "College Major: " << collegeMajor << endl;


	return 0;
}
