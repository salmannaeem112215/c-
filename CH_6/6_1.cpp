#include <iostream>
using namespace std;

double calculateRetail(double, double);

int main()
{
    double wholesale_cost;
    double markup_percentage;

    do
    {
        cout << "Enter Whole Sale Cost ";
        cin >> wholesale_cost;
    } while (wholesale_cost < 0);

    do
    {
        cout << "Enter Markup Percentage ";
        cin >> markup_percentage;
    } while (markup_percentage < 0);

    cout << "Retail Price is " << calculateRetail(wholesale_cost, markup_percentage) << endl;
}

double calculateRetail(double w, double m)
{
    return w + (w * m / 100);
}