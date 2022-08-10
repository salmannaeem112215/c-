#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // variables
    double weight,
        height,
        BMI;

    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your weight: ";
    cin >> weight;

    BMI = (weight * 703) / pow(height, 2);
    // or BMI = (weight * 703) / (height * height);

    if (BMI < 18.5)
    {
        cout << "You are underweight." << endl;
    }
    else if (BMI >= 18.5 && BMI <= 25)
    {
        cout << "Your weight is optimal." << endl;
    }
    else if (BMI > 25)
    {
        cout << "You are overweight." << endl;
    }

    return 0;
}
