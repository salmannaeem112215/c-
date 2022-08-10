#include <iostream>
#include <math.h>
using namespace std;

double stockProfit(int, double, double, double, double);

int main()
{
    int no_of_stocks;
    int ns;
    double pp;
    double pc;
    double sp;
    double sc;
    double stockAmount;
    double total_stockAmount;

    cout << "Enter no of stocks :";
    cin >> no_of_stocks;

    for (int i = 0; i < no_of_stocks; i++)
    {
        cout << "Enter details for stock " << i + 1 << " =>" << endl;
        cout << "Enter no of share :";
        cin >> ns;
        cout << "Enter Purchase price per share :";
        cin >> pp;
        cout << "Enter Purchase Commision paid :";
        cin >> pc;
        cout << "Enter Sale Price per share :";
        cin >> sp;
        cout << "Enter Sales Commision paid :";
        cin >> sc;

        stockAmount = stockProfit(ns, pp, pc, sp, sc);
        total_stockAmount += stockAmount;

        if (stockAmount < 0)
        {
            cout << "Loss of Amount " << stockAmount * -1 << endl;
        }
        else
        {
            cout << "Profit of Amount " << stockAmount << endl;
        }
        cout << endl;
    }

    if (total_stockAmount < 0)
    {
        cout << "Total Loss of a Amount " << total_stockAmount * -1 << endl;
    }
    else
    {
        cout << "Total Profit of Amount " << total_stockAmount << endl;
    }
}

double stockProfit(int NS, double PP, double PC, double SP, double SC)
{
    double temp;
    temp = ((NS * SP) - SC) - ((NS * PP) + PC);
    return temp;
}
