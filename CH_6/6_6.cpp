#include <iostream>
#include <math.h>
using namespace std;

double kineticEnergy(double m, double v)
{
    return ((0.5) * (m) * (pow(v, 2)));
}
int main()
{
    double ke = 0,
           m = 0,
           v = 0;
    cout << "enter the mass of object (kilograms):";
    cin >> m;
    cout << "enter the velocity of object (meters per second):";
    cin >> v;
    ke = kineticEnergy(m, v);
    cout << "kinetic energy of object is:" << ke << endl;
}
