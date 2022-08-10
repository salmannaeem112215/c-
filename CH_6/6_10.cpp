#include <iostream>
#include <math.h>
using namespace std;

double futureValue(double p, double i, double t)
{
    return (p * (pow((1 + i), t)));
}
int main()
{
    double F = 0, // F is the future value of the account after the specified time period.
        P = 0,    // P is the present value of the account.
        i = 0,    // i is the monthly interest rate .
        t = 0;    // t is the number of months .
    cout << "enter the amount present in your account:";
    cin >> P;
    cout << "enter the monthly interest rate:";
    cin >> i;
    i = i / 100; // convert in points
    cout << " enter the number of months that the money will be left in the account:";
    cin >> t;
    F = futureValue(P, i, t);
    cout << "the account’s future value will be:" << F << endl;
}
