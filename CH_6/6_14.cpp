#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

void display(int, int, bool, int);
void Ordered();

int main()
{
    Ordered();

    return 0;
}
void Ordered()
{
    cout << "enter the number of spools ordered:";
    int sOrdered = 0;
    do
    {
        cin >> sOrdered;
    } while (sOrdered < 1);

    cout << "enter the number of spools in stock:";
    int sIs = 0;
    do
    {
        cin >> sIs;
    } while (sIs < 0);

    char ask = 0;
    bool check = false;
    cout << "do yo have special shipping and handling charges or not? \n y or n ->";
    do
    {
        cin >> ask;
        if (ask == 'y' || ask == 'Y')
        {
            check = true;
        }
        else
        {
            check = false;
        }
    } while (ask != 'y' && ask != 'n' && ask != 'Y' && ask != 'N');
    display(sOrdered, sIs, check, 10);
}

void display(int order, int stock, bool special, int shipping)
{
    int readyToShip = 0;
    cout << endl
         << endl;
    if (order <= stock)
    {
        readyToShip = order;
        cout << "spools ready to ship from current stock are:" << order << endl;
    }
    else
    {
        order -= stock;
        readyToShip = order;
        cout << "spools ready to ship from current stock:" << order << endl;
        ;
    }
    if (order > stock)
    {
        int back = 0;
        back = order - stock;
        cout << "The number of spools on backorder are:" << back << endl;
        ;
    }
    double subTotal = (readyToShip * 100);
    cout << "Subtotal of the portion ready to ship is:" << subTotal << endl;
    double shippingCharge = 0;
    if (special)
    {
        shippingCharge = order * shipping;
    }
    cout << "Total shipping and handling charges on the portion ready to ship are:" << shippingCharge << endl;
    cout << "Total of order ready to ship is:" << shippingCharge + subTotal;
}
