#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

// program 6.18
//
// 110 sq feet
// 1 gallon of paint
// 8 hr
// 25 per hr

void display(int &rooms, double &price, int &sqF)
{

    cout << "The number of gallons of paint required are:" << (sqF / 110) << endl;
    cout << "The hours of labor required are:" << (sqF / 110) * 8 << endl;
    cout << "The cost of the paint is:" << (sqF / 110) * price << endl;
    cout << "The labor charges are:" << ((sqF / 110) * 8) * 25 << endl;
    cout << "The total cost of the paint job is:" << ((sqF / 110) * price) + (((sqF / 110) * 8) * 25) << endl;
}

int main()
{
    int noOfRooms = 0;
    double gallonPrice = 0;
    int sqFeet = 0;
    cout << "enter the number of rooms:";
    do
    {
        cin >> noOfRooms;
    } while (noOfRooms < 1);
    cout << "enter the price of paint per gallon:";
    do
    {
        cin >> gallonPrice;
    } while (gallonPrice < 10);
    cout << "enter the square feet of wall space in each room:";
    do
    {
        cin >> sqFeet;
    } while (sqFeet < 0);
    display(noOfRooms, gallonPrice, sqFeet);

    return 0;
}
