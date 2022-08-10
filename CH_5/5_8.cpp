#include <iostream>
using namespace std;

int main()
{
    bool cont = true; // to check user want to continue or not

    while (cont)
    {
        int choice;
        cout << "			MENU		" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1)
        {
            int num1, num2;
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        }
        else if (choice == 2)
        {
            int num1, num2;
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        }
        else if (choice == 3)
        {
            int num1, num2;
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        else if (choice == 4)
        {
            int divisor, divident;
            cout << "Enter Divisor: ";
            cin >> divisor;
            cout << "Enter Divident: ";
            cin >> divident;
            cout << divident << "/" << divisor << " = " << static_cast<float>(divident) / divident << endl;
        }
        else if (choice == 5)
        {
            cont = false;
        }
        else
        {
            cout << "Invalid Choice. " << endl;
        }
    }

    return 0;
}