#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    const double percentage_per_stock = 0.02;
    //fpr purchase
    double number_of_shares_purchased, paid_per_share, stock_prz_for_purchas, comission_prz_for_purchaces;
    //for sale
    double number_of_Shares_Sold,prz_of_share_SOLD_at,comission_prz_for_SOLD,stock_prz_SOLD_at;
    
    double profit;
    //calculaiton for purchases
    number_of_shares_purchased = 1000.0;
    paid_per_share = 45.50;
    stock_prz_for_purchas = number_of_shares_purchased * paid_per_share;
    comission_prz_for_purchaces = percentage_per_stock * stock_prz_for_purchas;
    //calculation for sale
    number_of_Shares_Sold=1000.0;
    prz_of_share_SOLD_at=56.90;
    stock_prz_SOLD_at=number_of_Shares_Sold*prz_of_share_SOLD_at;
    comission_prz_for_SOLD=percentage_per_stock*stock_prz_SOLD_at;

    profit=stock_prz_SOLD_at-stock_prz_for_purchas-(comission_prz_for_purchaces+comission_prz_for_SOLD);
    cout<<"Amount of money Joe paid for stock is $"<<stock_prz_for_purchas<<endl;
    cout<<"Commission he paid to his broker when he bought the stock is $"<<comission_prz_for_purchaces<<endl;
    cout<<"Amount that joe sold stock for is $"<<stock_prz_SOLD_at<<endl;
    cout<<"Amount of commision that joe paid to his broker when he sold the stock $"<<comission_prz_for_SOLD<<endl;

    cout<<fixed<<showpoint<<setprecision(2);
    if(profit>0)
    {
        cout<<"Joe Earned profit of $"<<profit<<endl;
    }
    else
    {
        cout<<"Joe Lost $"<<profit<<endl;
    }
    
    return 0;

}