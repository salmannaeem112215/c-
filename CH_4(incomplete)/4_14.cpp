#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // variables
    double beginningBalance,
        serviceCharges = 0; // if value is to e added variable must be initialized with 0
    int noOfChecksWritten;

    // input data from user
    cout << "Enter the beginningBalance: ";
    cin >> beginningBalance;
    do // input validation
    {
        cout << "Enter the no of checks written: ";
        cin >> noOfChecksWritten;
        if (noOfChecksWritten < 0)
        {
            cout << "Please enter a valid no " << endl;
        }
    } while (noOfChecksWritten < 0);

    if (beginningBalance < 0)
    {
        cout << "Account is overdrawn. " << endl;
    }
    else
    {

        // calculate service charges
        if (beginningBalance < 400)
        {
            serviceCharges += 15;
        }

        if (noOfChecksWritten < 20)
        {
            serviceCharges += (noOfChecksWritten * 0.10);
        }
        else if (noOfChecksWritten >= 20 && noOfChecksWritten < 40)
        {
            serviceCharges += (noOfChecksWritten * 0.08);
        }
        else if (noOfChecksWritten >= 40 && noOfChecksWritten < 60)
        {
            serviceCharges += (noOfChecksWritten * 0.06);
        }
        else
        {
            serviceCharges += (noOfChecksWritten * 0.04);
        }

        cout << "Total service charges: " << serviceCharges << endl;
    }

    return 0;
}
