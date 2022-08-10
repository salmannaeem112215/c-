#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

bool isPrime(int value);
int main() {
	int n;

	cout << "enter the number you wanna check:";
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "number is prime.";
		return 0;
	}
	if (isPrime(n)) {
		cout << "number is prime.\n";
	}
	else {
		cout << "number is not prime.\n";
	}
 return 0;
}


bool isPrime(int value) {
	for (int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}