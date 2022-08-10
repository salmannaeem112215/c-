#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double YEN_PER_DOLLAR,EUROS_PER_DOLLAR;
    double us_Dollar,euros,yen;
    YEN_PER_DOLLAR=136.18,EUROS_PER_DOLLAR=0.98;
    us_Dollar=euros=yen=0.0;

    cout<<"Enter Us Dollar and i will convert it to \n";
    cout<<" ==> Chinease yen\n"
        <<" ==> Euros\n>";
    cin>>us_Dollar;
    yen=us_Dollar*YEN_PER_DOLLAR;
    euros=us_Dollar*EUROS_PER_DOLLAR;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<us_Dollar<<" Dollars Are Equal to \n";
    cout<<yen<<" Chinease yen\n";
    cout<<euros<<" Euros";
    return 0;
}