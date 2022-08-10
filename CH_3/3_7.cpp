#include <iostream>
#include<string>
using namespace std;

int main()
{
    string movie_name;
    float adult_tickets, child_tickets, gross_profit, net_profit, distributor;
    double adult_price = 10;
    double child_price = 6;
    //    ask from user
    cout << "Plz! Enter the details for calculating output " << endl;
    cout << " write the movie name" << endl;
    getline(cin,movie_name);
    cout << "Enter the no.of adults tickets:" << endl;
    cin >> adult_tickets;
    cout << "Enter the no. of children tickets" << endl;
    cin >> child_tickets;
    //  calculating the gross and net profit
    gross_profit = (adult_price * adult_tickets) + (child_price * child_tickets);
    net_profit = gross_profit * 0.20;
    distributor = gross_profit - net_profit;
    //   display the report
    cout << setprecision(2) << fixed;
    cout << "Movie Name:    ";
    cout << movie_name  << endl;
    cout << "Adult tickets sold:      " << setw(10);
    cout << adult_tickets << endl;
    cout << "Child tickets sold:      " << setw(10);
    cout << child_tickets << endl;
    cout << "Gross Box Office Profit:    $ " <<setw(10)<< gross_profit << endl;
    cout << " Net Box Office Profit:     $ " << setw(10)<<net_profit << endl;
    cout << "Amount Paid to Distributor: $ " << setw(10)<<distributor << endl;
    return 0;
}
