#include<iostream>
using namespace std;
int main()
{
double purchasePrice=95;
double state_taxrate=0.04,country_taxrate=0.02;
double total_tax,state_tax,country_tax,final_amount;
state_tax=purchasePrice*state_taxrate;
country_tax=purchasePrice*country_taxrate;
total_tax=state_tax+country_tax;
final_amount=purchasePrice+total_tax;
cout<<"the amount before adding tax is "<<purchasePrice<<endl;
cout<<"the amount after adding tax is ";
cout<<final_amount;
return 0;

}