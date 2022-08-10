#include<iostream>
using namespace std;
int main() {
	int shares = 750;
	float priceofone_share = 35.00;
	float commission = 0.02;//2 percent
	double amount_paid_for_stock = 0.0;
	double amount_of_commission = 0.0;
	double total_amount = 0.0;
	//amount_paid_for_stock
	cout << endl;
	amount_paid_for_stock = shares * priceofone_share;
	cout << "The amount paid for the stock alone (without the commission) is:" << amount_paid_for_stock <<"$" << endl;
	cout << endl;

	amount_of_commission = amount_paid_for_stock * commission;
	cout << "The amount of the commission is :" << amount_of_commission << "$" << endl;
	cout << endl;
	total_amount = amount_paid_for_stock + amount_of_commission;
	cout << "The total amount paid (for the stock plus the commission) is:" << total_amount << "$" << endl;
	return 0;
}