#include <iostream>
#include <conio.h> // getch();
using namespace std;

const int ROW = 3;
const int COL = 3;
const char PLY1 = 'X';
const char PLY2 = 'O';

void resetBoard(char arr[][COL]);      // MODULE TO RESET THE VALUE OF BOARD arr
void displayBoard(char arr[][COL]);    // TO DISPLAY VALUES OF BOARD ARR ON SCREEN
void inputValidator(char arr[][COL], int &r, int &c);   // WILL VALIDATE THE ENTRY AND ASSIGN THE VALUES to ROW AND COL 
bool gameEnd(char arr[][COL]);                          // WILL CHECK WHETER THE GAMES ENDS OF OR NOT WITH THE HELP OF RULES

int main()
{

    bool player;
    bool tie = false;
    int userRow, userCol, count = 0;
    char choice;
    char board[ROW][COL];
    // For Playing Again The TIC TAC TOE
    while (true)
    {
        resetBoard(board);
        displayBoard(board);
        cout << "Press Key to Start" << endl;
        getch();

        // FOR FILLIND THE BOARD BY TAKING INPUT FROM PLAYER
        while (true)
        {
            // For Player 1
            cout << "Player 1 " << endl;
            inputValidator(board, userRow, userCol); // Entry Validator
            board[userRow][userCol] = PLY1;          // store the sign on user selected location
            displayBoard(board);                     // display the board  
            count++;                                 // Incrementing after each player to check is it tie or nor
            // TO CHECK PLAYER WINS OR NOT
            if (gameEnd(board))
            {
                player = true;
                break;
            }
            // TO CHECK IS IT TIE
            if (count == ROW * COL)
            {
                tie = true;
            }

            // For Player 2
            cout << "Player 2 " << endl;
            inputValidator(board, userRow, userCol);
            board[userRow][userCol] = PLY2;
            displayBoard(board);
            count++;
            if (gameEnd(board))
            {
                player = false;
                break;
            }
            if (count == ROW * COL)
            {
                tie = true;
            }
        }

        // IF MATCH TIE
        if (tie)
        {
            cout << "Match Tie " << endl;
        }
        // IF PLAYER WINS THE MATCH
        else
        {
            cout << "Player " << ((player) ? "1" : "2") << "Wins the Match " << endl;
        }

        // IF PLAYER WANTS TO PLAY AGAIN 
        cout << "Want To play Again (y/n) => ";
        cin >> choice;
        if (choice == 'N' || choice == 'n')
        {
            break;
        }
        getch();
    }
}

void resetBoard(char arr[][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = '*';
        }
    }
}
void displayBoard(char arr[][COL])
{
    cout << "   0   1   2  " << endl;
    cout << " +---+---+---+" << endl;
    cout << "0| " << arr[0][0] << " | " << arr[0][1] << " | " << arr[0][2] << " |" << endl;
    cout << " +---+---+---+" << endl;
    cout << "1| " << arr[1][0] << " | " << arr[1][1] << " | " << arr[1][2] << " |" << endl;
    cout << " +---+---+---+" << endl;
    cout << "2| " << arr[2][0] << " | " << arr[2][1] << " | " << arr[2][2] << " |" << endl;
    cout << " +---+---+---+" << endl;
}
void inputValidator(char arr[][COL], int &r, int &c)
{
    while (true)
    {
        do
        {
            cout << "Enter Row ";
            cin >> r;
        } while (r >= ROW && r < 0);
        do
        {
            cout << "Enter Col ";
            cin >> c;
        } while (c >= COL && c < 0);

        if (arr[r][c] == '*')
        {
            break;
        }
        cout << "Invalid Entry " << endl;
    }
}
bool gameEnd(char arr[][COL])
{
    bool temp;
    // for all 3 Rows
    if ((arr[0][0] == arr[0][1]) && (arr[0][0] == arr[0][2]) && arr[0][0] != '*')
    {
        temp = true;
    }
    else if ((arr[1][0] == arr[1][1]) && (arr[1][0] == arr[1][2]) && arr[1][0] != '*')
    {
        temp = true;
    }
    else if ((arr[2][0] == arr[2][1]) && (arr[2][0] == arr[2][2]) && arr[2][0] != '*')
    {
        temp = true;
    }

    // for all 3 Columns
    else if ((arr[0][0] == arr[1][0]) && (arr[0][0] == arr[2][0]) && arr[0][0] != '*')
    {
        temp = true;
    }
    else if ((arr[0][1] == arr[1][1]) && (arr[0][1] == arr[2][1]) && arr[0][1] != '*')
    {
        temp = true;
    }
    else if ((arr[0][2] == arr[1][2]) && (arr[0][2] == arr[2][2]) && arr[0][2] != '*')
    {
        temp = true;
    }

    // for both Diagnols
    else if ((arr[0][0] == arr[1][1]) && (arr[0][0] == arr[2][2]) && arr[0][0] != '*')
    {
        temp = true;
    }
    else if ((arr[0][2] == arr[1][1]) && (arr[0][2] == arr[2][0]) && arr[0][2] != '*')
    {
        temp = true;
    }
    else
    {
        temp = false;
    }
    return temp;
}
