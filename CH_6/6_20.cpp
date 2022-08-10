#include <iostream>
#include <math.h>
using namespace std;

double stockProfit(int, double, double, double, double);

int main()
{
    int ns;
    double pp;
    double pc;
    double sp;
    double sc;
    double stockAmount;

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
    if (stockAmount < 0)
    {
        cout << "Loss of Amount " << stockAmount * -1 << endl;
    }
    else
    {
        cout << "Profit of Amount " << stockAmount << endl;
    }
}

double stockProfit(int NS, double PP, double PC, double SP, double SC)
{
    double temp;
    temp = ((NS * SP) - SC) - ((NS * PP) + PC);
    return temp;
}