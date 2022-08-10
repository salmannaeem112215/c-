#include <iostream>
using namespace std;

int main()
{
    double membershipCharges = 2500,
           chargesIncreaseRate = 0.04;

    for (int i = 0; i <= 6; i++)
    {
        membershipCharges += (chargesIncreaseRate * membershipCharges);
    }

    cout << "Membership charges after 6 years will be: "
         << membershipCharges << endl;

    return 0;
}