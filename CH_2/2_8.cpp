#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float TAX = .07;
    float item1 = 15.95,
          item2 = 24.95,
          item3 = 6.95,
          item4 = 12.95,
          item5 = 3.95,
          subtotal = item1 + item2 + item3 + item4 + item5,
          totalSalesTax = subtotal * TAX,
          grand_total = subtotal + totalSalesTax;
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "Item 1 = $" << item1 << endl;
    cout << "Item 2 = $" << item2 << endl;
    cout << "Item 3 = $" << item3 << endl;
    cout << "Item 4 = $" << item4 << endl;
    cout << "Item 5 = $" << item5 << endl;
    cout << "Subtotal = $" << subtotal << endl;
    cout << "Sales tax = $" << totalSalesTax << endl;
    cout << "Grand Total = $" << grand_total << endl;
    cout << endl;

    return 0;
}