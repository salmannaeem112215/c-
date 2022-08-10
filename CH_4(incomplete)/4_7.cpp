#include <iostream>
using namespace std;
int main() {
	int sec,hour,min,day;
	cout << "Enter the number of seconds" << endl;
	cin >> sec;
	if (sec <= 59)
		cout << sec << endl;
	else if (sec >= 60 || sec < 3600) {
		min = sec / 60;
		cout << min<<"min in "<<sec<<"seconds" << endl;
	}
	else if (sec >= 3600 || sec < 86400) {
		hour = sec / 3600;
		cout << hour<<"hours in"<<sec<<"seconds." << endl;
	}
	else if (sec >= 86400)  {
		day = sec / 86400;
		cout << day << "days in" << sec << "seconds." << endl;
	}
		return 0;
}





