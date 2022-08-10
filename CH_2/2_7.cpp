#include<iostream>
using namespace std;
int main() {
	const float Mil_per_year = 1.5;
	int five_year = 5;
	int seven_year = 7;
	int ten_year = 10;
	float mil_after_5 = Mil_per_year * five_year;
	float mil_after_7 = Mil_per_year * seven_year;
	float mil_after_10 = Mil_per_year * ten_year;
	cout << "************  Display the Output   ***********" << endl;
	cout << "The ocean level after five year  wil be higher than current level " << mil_after_5 << endl;
	cout << "The ocean level after seven year  wil be higher than current level " << mil_after_7 << endl;
	cout << "The ocean level after ten year  wil be higher than current level " << mil_after_10 << endl;
	return 0;
}