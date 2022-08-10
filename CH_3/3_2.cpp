#include<iostream>
#include<iomanip>
using namespace std;
int main(){

	int class_A_seat_Cost = 15;
	int class_B_seat_Cost = 12;
	int class_C_seat_Cost = 9;
	int A_ticket = 0;
	int C_ticket = 0;
	int B_ticket = 0;
	float amount=0.0;
	cout << "This program calculate the cost of all tickes" << endl;
	cout << "enter the tickets which you want to sell for class A:";
	cin >> A_ticket;
		cout << "enter the tickets which you want to sell for class B:";
	cin >> B_ticket;
	
	cout << "enter the tickets which you want to sell for class C:";
	cin>> C_ticket ;
	cout << endl;
	amount = (A_ticket * class_A_seat_Cost) + (B_ticket * class_B_seat_Cost) + (C_ticket * class_C_seat_Cost);
	cout <<fixed<< setprecision(2);
	cout << "the  amount generated from ticket sale is:" << amount << "$" << endl;



}