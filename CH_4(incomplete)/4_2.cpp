
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int x;

    // Ask the user to enter a number between 1 and 10. (within range)
    cout << "Enter a number between 1 and 10: ";
    cin >> x;

    // Use switch statement to display the Roman numeral version of that #.
    switch (x)
    {
    case 1:
        cout << "The Roman numeral for ";
        cout << x << " is I\n";
        break;
    case 2:
        cout << "The Roman numeral for ";
        cout << x << " is II\n";
        break;
    case 3:
        cout << "The Roman numeral for ";
        cout << x << " is III\n";
        break;
    case 4:
        cout << "The Roman numeral for ";
        cout << x << " is IV\n";
        break;
    case 5:
        cout << "The Roman numeral for ";
        cout << x << " is V\n";
        break;
    case 6:
        cout << "The Roman numeral for ";
        cout << x << " is VI\n";
        break;
    case 7:
        cout << "The Roman numeral for ";
        cout << x << " is VII\n";
        break;
    case 8:
        cout << "The Roman numeral for ";
        cout << x << " is VIII\n";
        break;
    case 9:
        cout << "The Roman numeral for ";
        cout << x << " is XI\n";
        break;
    case 10:
        cout << "The Roman numeral for ";
        cout << x << " is X\n";
        break;
    default:
        cout << "You must enter a number between 1 and 10\n";
        cout << "Run the program over and try again.\n";
        break;
    }
    // Terminate program
    return 0;
}