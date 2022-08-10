  /////////////     For calculating the acre of land     ///////////////
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int one_acre_land = 43560;       //one acre of land is equal to 43560 square feet
	int  no_sqr_feet = 391876;
	float result;
	result = no_sqr_feet / one_acre_land;
	cout << "The 391876 square feet of land  is equal to " << result << " acre." << endl;
	return 0;
}