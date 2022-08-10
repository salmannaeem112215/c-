#include <iostream>
using namespace std;
const double GRAVITY = 9.8;
double fallingDistance(int);

int main()
{
    cout << GRAVITY << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "In " << i + 1 << " Second distane is " << fallingDistance(i + 1) << endl;
    }
}

double fallingDistance(int t)
{
    return (1 / 2.0 * GRAVITY * t);
}