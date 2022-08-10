#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constant Variables
    const int COOKIES_PER_BAG       = 30,
              SERVINGS_PER_BAG      = 10,
              CALORIES_PER_SERVING  = 300;

    // Variables
    float cookies_eaten,
          servings_eaten,
          calories_consumed,

          cookies_per_serving = COOKIES_PER_BAG / SERVINGS_PER_BAG;

    // Ask how many cookies eaten
    cout << endl;
    cout << "How many cookies eaten? ";
    cin >> cookies_eaten;

    // Calculate number of servings
    servings_eaten = cookies_eaten / cookies_per_serving;

    // Calculate caloires consumed
    calories_consumed = servings_eaten * CALORIES_PER_SERVING;

    cout << '\n' << setprecision(2) << fixed << right;

    cout << "Number of cookies per bag      = ";
    cout  << COOKIES_PER_BAG      << endl;

    cout << "Number of servings per bag     = ";
    cout  << SERVINGS_PER_BAG     << endl;

    cout << "Number of calories per serving = ";
    cout  << CALORIES_PER_SERVING << endl;

    cout << "Number of cookies per serving  = ";
    cout  << cookies_per_serving  << endl;

    cout << "Number of cookies eaten        = ";
    cout  << cookies_eaten        << endl;

    cout << "Number of servings eaten       = ";
    cout  << servings_eaten       << endl;

    cout << "Number of calories consumed    = ";
    cout  << calories_consumed    << endl;

    cout << endl;
    return 0;
}