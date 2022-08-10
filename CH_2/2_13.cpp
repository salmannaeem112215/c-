#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	double profitPercent = 35;
	double costPrice = 14.95;
	double profitPrice = costPrice * (profitPercent/100);
	double salePrice = costPrice + profitPrice;

	cout << showpoint << fixed << setprecision(2);
	cout << "Profit percentage on selling of circuit boards: " << profitPercent << "%" << endl;
	cout << "Cost Price of circuit boards: $" << costPrice << endl;
	cout << "Selling Price of circuit boards: $" << salePrice << endl;
}