#include <iostream>
#include <math.h>
using namespace std;

double presentValue(double, double, int);

int main()
{
    double futureValue, annaulIntrestRate;
    int years;

    cout << "Enter -1 to terminate \n";
    while (true)
    {
        cout << "Enter FutureValue :";
        cin >> futureValue;
        if (futureValue == -1)
        {
            cout << "Program terminated \n";
            break;
        }
        cout << "Enter Annual Intrest Rate (for 100% press 1) :";
        cin >> annaulIntrestRate;
        if (annaulIntrestRate == -1)
        {
            cout << "Program terminated \n";
            break;
        }

        cout << "Enter no of years :";
        cin >> years;
        if (years == -1)
        {
            cout << "Program terminated \n";
            break;
        }

        cout << "Present Value will be " << presentValue(futureValue, annaulIntrestRate, years) << endl;
    }
}

double presentValue(double F, double r, int n)
{
    return (F / (pow((1 + r), n)));
}