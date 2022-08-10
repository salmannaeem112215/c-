#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

double getLength()
{
    cout << "Enter the length of rectangle:";
    double l;
    cin >> l;
    return l;
}

double getWidth()
{
    cout << "Enter the width of rectangle:";
    double w;
    cin >> w;
    return w;
}

double getArea(double l, double w)
{
    return l * w;
}

void displayData(double l, double w, double a)
{
    cout << "area of rectangle with length " << l << "m and width " << w << "m is " << a << "m" << endl;
}

int main()
{
    double length = 0,
           width = 0,
           area = 0;
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);
}