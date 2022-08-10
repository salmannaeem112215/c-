#include<iostream>
using namespace std;

int main() {
	int noOfMales, noOfFemales ,totalStudents;

	cout << "Enter no of males: ";
	cin >> noOfMales;
	cout << "Enter no of females: ";
	cin >> noOfFemales;

	totalStudents = noOfFemales + noOfMales;

	cout << "Percentage of males: " << (noOfMales * 100.0 / totalStudents) << endl;
	cout << "Percentage of females: " << (noOfFemales * 100.0 / totalStudents) << endl;

	return 0;
}

