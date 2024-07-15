#include <iostream>
#include <string>
using namespace std;

int main()
{
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

    const char playerX = 'X';
    const char playerO = 'O';
    char currentPlayer = playerX;
    int r = -1;
    int c = -1;
    char winner = ' ';

    for (int i = 0; i < 9; i++)
    {
        cout << "   |   |   " << endl;
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
        cout << "   |   |   " << endl;

        if (winner != ' ')
        {
            break;
        }

        cout << "Current player is " << currentPlayer << endl;
        while (true)
        {
            cout << "Enter r c from 0-2 for row and column: ";
            std::cin >> r >> c;
            if (r < 0 || r > 2 || c < 0 || c > 2)
            {
                cout << " Invalid input try again." << endl;
            }
            else if (board[r][c] != ' ')
            {
                cout << "Tile is full, try again." << endl;
            }
            else
            {
                break;
            }
            r = -1;
            c = -1;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        board[r][c] = currentPlayer;
        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;
        for (int a = 0; a < 3; a++)
        {
            if (board[a][0] != ' ' && board[a][0] == board[a][1] && board[a][0] == board[a][2])
            {
                winner = board[a][0];
                break;
            }
        }

        for (int b = 0; b < 3; b++)
        {
            if (board[0][b] != ' ' && board[0][b] == board[1][b] && board[0][b] == board[2][b])
            {
                winner = board[0][b];
                break;
            }
        }

        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        {
            winner = board[0][0];
        }
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
        {
            winner = board[0][2];
        }
    }

    if (winner != ' ')
    {
        cout << "Player " << winner << " is the winner!";
    }
    else
    {
        cout << "Tie";
    }
}