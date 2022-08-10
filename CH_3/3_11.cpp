#include<iostream>
using namespace std;
int main() {
	double monthly_cost;
	double annual_Cost;
	int loan_payment_cost;
	int insurance_cost;
	int gas_cost;
	int oil_cost;
	int tires_Cost;
	int maintenance_cost;
	cout << "Enter monthly cost for  loan payment:";
	cin >> loan_payment_cost;
	cout << "Enter monthly cost for  insurance:";
	cin >> insurance_cost;
	cout << "Enter monthly cost for  gas:";
	cin >> gas_cost;
	cout << "Enter monthly cost for oil:";
	cin >> oil_cost;
	cout << "Enter monthly cost for  tires:";
	cin >> tires_Cost;

	cout << "Enter monthly cost for  maintance:";
	cin >> maintenance_cost;
	monthly_cost = loan_payment_cost + insurance_cost + gas_cost + oil_cost + tires_Cost;
	cout << "The total monthly cost of these expenses is:" << monthly_cost << "$" << endl;
	annual_Cost = monthly_cost * 12;
	cout << "the annual cost of these expences is:" << annual_Cost << "$";
	return 0;




}