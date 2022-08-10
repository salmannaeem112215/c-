#include <iostream>
#include <conio.h>
#include <iomanip> //setw() , left
#include <fstream>
#include <stdlib.h> //  system("CLS")
using namespace std;

const int ROW = 15;
const int COL = 30;
const char prices_filename[] = "ticketPrices.txt";
const char seats_filename[] = "seats.txt";
const char SOLD_char = '#';
const char UN_SOLD_char = '_';
const bool SOLD = true;
const bool NOT_SOLD = false;

void clearScreen();
void pressKey();
void move_cursor_back(int);
void readPrice(double arr[]);
void fillChart(bool arr[][COL]);
void updateChartFile(bool arr[][COL]);
void displayChart(bool arr[][COL]);
bool selectTicket(bool arr[][COL], int &r, int &c);
bool printBill(double arr[], int r, int c, int billNo);
int no_of_ticket_sales(bool arr[][COL]);
int seats_avaliable_in_row(bool arr[][COL], int r);
void printSales(bool arr[][COL], double price[]);
void seats_in_selected_row(bool arr[][COL]);

int main()
{
    int user_row, user_col;
    double price[ROW];
    bool seats[ROW][COL];
    bool again = true;
    char choice;
    readPrice(price);
    fillChart(seats);

    while (again)
    {
        clearScreen();
        cout << "+========================================+" << endl;
        displayChart(seats);
        cout << "+----------------------------------------+" << endl;
        cout << "| 1: Buy Ticket                          |" << endl;
        cout << "| 2: Total Sales                         |" << endl;
        cout << "| 3: Total Seats Sold                    |" << endl;
        cout << "| 4: Total Seats Avaliable               |" << endl;
        cout << "| 5: Total Seats in selected Row         |" << endl;
        cout << "| 6: Quit                                |" << endl;
        cout << "+----------------------------------------+" << endl;
        cout << "| Please select (1-6)                    |" << endl;
        cout << "+----------------------------------------+" << endl;
        cout << "| Choice =>                              |";
        // to set the cursor just right next to => of chocie
        move_cursor_back(30);
        cin >> choice;

        switch (choice)
        {
        case '1':
            if (selectTicket(seats, user_row, user_col))
            {
                if (printBill(price, user_row, user_col, no_of_ticket_sales(seats) + 1))
                {
                    seats[user_row - 1][user_col - 1] = SOLD;
                }
                else
                {
                    cout << "| Purchased Canceled                     |" << endl;
                }
            }
            else
            {
                cout << "| Ticket Selection Canceled              |" << endl;
            }

            pressKey();
            break;
        case '2':
            printSales(seats, price);

            pressKey();
            break;
        case '3':
            cout << "| Total Seats Sold :" << setw(20) << left << no_of_ticket_sales(seats) << " |" << endl;
            cout << "+----------------------------------------+" << endl;
            pressKey();
            break;

        case '4':
            cout << "| Total Seats Avaliable :" << setw(15) << left << ((ROW * COL) - no_of_ticket_sales(seats)) << " |" << endl;
            cout << "+----------------------------------------+" << endl;
            pressKey();
            break;

        case '5':
            seats_in_selected_row(seats);
            pressKey();
            break;

        case '6':
            cout << "| Program Terminated                     |" << endl;
            cout << "+----------------------------------------+" << endl;
            again = false;
            break;

        default:
            cout << "| Invalid ENtry                          |" << endl;
            cout << "+----------------------------------------+" << endl;
            break;
        }
    }
    updateChartFile(seats);
}

// Functions Defination 
void clearScreen()
{
    system("CLS");
}
void pressKey()
{
    cout << "| Press Any Key To Continue              |" << endl;
    cout << "+----------------------------------------+" << endl;
    getch();
}
void move_cursor_back(int value)
{
    for (int i = 0; i < value; i++)
        cout << "\b";
}
void readPrice(double arr[])
{
    int index = 0;
    ifstream in;
    in.open(prices_filename);
    if (in)
    {
        cout << "| File Open                              |" << endl;
        while (!(in.eof()))
        {
            in >> arr[index];
            index++;
        }
        if (index != ROW)
        {
            cout << "| INVALID FILE READ                      |" << index << endl;
        }
    }
    else
    {
        cout << "| File not open                          |" << endl;
        for (int i = 0; i < ROW; i++)
        {

            cout << "| ROW " << setw(2) << i + 1 << ": Enter Price : " << setw(18) << "|";
            move_cursor_back(18);
            cin >> arr[i];
        }
    }
    in.close();
}
void displayChart(bool arr[][COL])
{
    int count = 0;
    // Numbering Cols.
    cout << "| "; // format
    cout << "        ";
    for (int i = 0; i < COL; i++)
    {
        count++;
        if (count % 10 == 0)
        {
            count = 0;
        }
        cout << count;
    }
    cout << " |"; // format
    cout << endl;

    for (int i = 0; i < ROW; i++)
    {
        // Numbering Rows.
        cout << "| "; // format
        cout << "Row " << setw(2) << i + 1 << "  ";
        // Displaying Each Row # or *
        for (int j = 0; j < COL; j++)
        {
            cout << (arr[i][j] ? SOLD_char : UN_SOLD_char);
        }
        cout << " |"; // format
        cout << endl;
    }
}
void fillChart(bool arr[][COL])
{
    int count = 0;
    ifstream in;
    in.open(seats_filename);
    if (!(in.eof()))
    {
        cout << "| File Open                              |" << endl;
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COL; j++)
            {
                in >> arr[i][j];
                count++;
            }
        }
        if (count != ROW * COL)
        {
            cout << "| Invalid Read                           |" << endl;
        }
    }
    else
    {
        cout << "| File Not Open                          |" << endl;
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COL; j++)
            {
                arr[i][j] == 0;
            }
        }
    }
}
bool selectTicket(bool arr[][COL], int &r, int &c)
{
    while (true)
    {
        cout << "| Enter Row : " << setw(28) << "|";
        move_cursor_back(28);
        cin >> r;
        if (r == -1)
        {
            cout << "| You have cancel Buying ticket          |" << endl;
            return false;
        }
        cout << "| Enter COL : " << setw(28) << "|";
        move_cursor_back(28);
        cin >> c;
        if (c == -1)
        {
            cout << "| You have cancel Buying ticket          |" << endl;
            return false;
        }

        if (r > ROW || c > COL)
        {
            cout << "| You have cancel Buying ticket          |" << endl;
            cout << "| Invalid Seat Selected.. Try Again      |" << endl;
            continue;
        }
        // if(arr[r-1][c-1]){          // we can also use this
        else if (arr[r - 1][c - 1] == SOLD)
        {
            cout << "| Seat Already Booked                    |" << endl;
        }
        else
        {
            return true;
        }
    }
}
bool printBill(double arr[], int r, int c, int b)
{
    char choice;
    cout << "+========================================+" << endl;
    cout << "|               Print-Slip               |" << endl;
    cout << "+----------------------------------------+" << endl;
    cout << "| Ticket : " << setw(29) << left << b
         << " |" << endl;
    cout << "| Row    : " << setw(29) << left << r << " |" << endl;
    cout << "| Column : " << setw(29) << left << c << " |" << endl;
    cout << "+----------------------------------------+" << endl;
    cout << "| Price  : " << setw(29) << left << arr[r] << " |" << endl;
    cout << "+----------------------------------------+" << endl;
    cout << "| Please Confirm                         |" << endl;
    cout << "| Purchase (y/n)                         |" << endl;
    cout << "+----------------------------------------+" << endl;
    cout << "| Choice =>" << setw(29)<<" " << "|";
    move_cursor_back(30);
    cin >> choice;

    return (choice == 'y' || choice == 'Y') ? true : false;
}
int no_of_ticket_sales(bool arr[][COL])
{
    int count = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] == SOLD)
            {
                count++;
            }
        }
    }
    return count;
}
int seats_avaliable_in_row(bool arr[][COL], int r)
{
    int count = 0;
    for (int j = 0; j < COL; j++)
    {
        if (arr[r][j] == NOT_SOLD)
        {
            count++;
        }
    }
    return count;
}
void printSales(bool arr[][COL], double price[])
{
    // Declaring +intitalizing array with zero
    int soldTicket[ROW];
    for (int i = 0; i < ROW; i++)
    {
        soldTicket[i] = 0;
    }

    // Calculating tickets sold in each row
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j])
            { // if value is 1 means sold it will be tru
                soldTicket[i]++;
            }
        }
    }

    // printing Values
    double totalAmount = 0.0;
    cout << setprecision(1) << fixed;
    cout << "+----------------------------------------+" << endl;
    cout << "|       Sales Slip Overall Cinema        |" << endl;
    cout << "+----------------------------------------+" << endl;
    cout << "| Row No  |  Sell  |  Price  |  Total    |" << endl;
    cout << "+----------------------------------------+" << endl;
    for (int i = 0; i < ROW; i++)
    {
        cout << "| Row " << setw(2) << i + 1 << " "
             << " |  " << setw(5) << left << soldTicket[i]
             << " | $" << setw(7) << left << price[i]
             << " | $" << setw(7) << left << soldTicket[i] * price[i]
             << " | " << endl;

        totalAmount += price[i] * soldTicket[i];
    }
    cout << "+----------------------------------------+" << endl;
    cout << "| Total Sales : $" << setw(24) << left << totalAmount << "|" << endl;
    cout << "+----------------------------------------+" << endl;
}
void seats_in_selected_row(bool arr[][COL])
{
    int row;
    cout << "+----------------------------------------+" << endl;
    do
    {
        cout << "| Enter Row : " << setw(27) <<" "<< "|";
        move_cursor_back(28);
        cin >> row;
    } while (row < 1 || row > ROW);

    cout << "+----------------------------------------+" << endl;
    cout << "| Row " << setw(2) << row << " : " << seats_avaliable_in_row(arr, row - 1) << " " << setw(27)<<" " << "|" << endl;
    cout << "+----------------------------------------+" << endl;
}
void updateChartFile(bool arr[][COL])
{
    ofstream out;
    out.open(seats_filename);

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            out << arr[i][j] << " ";
        }
        // will no execute for last line
        if (i != ROW)
        {
            out << endl;
        }
    }
    out.close();
}