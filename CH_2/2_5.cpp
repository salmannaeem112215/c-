#include<iostream>
using namespace std;

int main() {
	double val1, val2, val3, val4, val5,
		sum, average;
	
	cout << "Enter values with spaces :";
	cin >> val1 >> val2 >> val3 >> val4 >> val5;

	sum = val1 + val2 + val3 + val4 + val5;

	average = (sum / 5.0);

	cout << "Average is: " << average << endl;

	return 0;
	

}

//	//	2nd method
//#include<iostream>
//using namespace std;
//
//int main() {
//	double val1, val2, val3, val4, val5,
//		sum, average;
//	
//	cout << "Enter 1st value: ";
//	cin >> val1 ;
//	cout << "Enter 2nd value: ";
//	cin >> val2 ;
//	cout << "Enter 3rd value: ";
//	cin >> val3 ;
//	cout << "Enter 4th value: ";
//	cin >> val4 ;
//	cout << "Enter 5th value: ";
//	cin >> val5 ;
//
//	sum = val1 + val2 + val3 + val4 + val5;
//
//	average = (sum / 5.0);
//
//	cout << "Average is: " << average << endl;
//
//	return 0;
//	
//}
