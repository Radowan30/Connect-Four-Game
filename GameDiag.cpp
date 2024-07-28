#include <iostream>
#include <string>
using namespace std;

#include "GameDiag.hpp"

GameDiag::GameDiag(){};

bool GameDiag::isWinner(char player)
{
    // Check diagonally (positive slope)
    for (int row = 0; row < 6 - 3; ++row)
    {
        for (int col = 0; col < 7 - 3; ++col)
        {
            if (board[row][col].getState() == player && board[row + 1][col + 1].getState() == player &&
                board[row + 2][col + 2].getState() == player && board[row + 3][col + 3].getState() == player)
                return true;
        }
    }

    // Check diagonally (negative slope)
    for (int row = 0; row < 6 - 3; ++row)
    {
        for (int col = 3; col < 7; ++col)
        {
            if (board[row][col].getState() == player && board[row + 1][col - 1].getState() == player &&
                board[row + 2][col - 2].getState() == player && board[row + 3][col - 3].getState() == player)
                return true;
        }
    }

    return false;
}

void GameDiag::playGame()
{
    const PlayerProfile* currentPlayer = player1;
    int moves = 0;
    while (true)
    {
        DrawBoard();

        int col;
        cout << currentPlayer->getPlayerName() << ", choose a column (1-7): ";
        cin >> col;

        system("cls");

        if (playMove(col, currentPlayer == player1? 'X' : 'O'))
        {
            if (isWinner(currentPlayer == player1? 'X' : 'O'))
            {
                DrawBoard();
                cout << currentPlayer->getPlayerName() << " has a "<< currentPlayer->getPlayerAdj()<< " win of the game!\n";
                break;
            }

            currentPlayer = (currentPlayer == player1? player2: player1);
            setWinnerPlayer(currentPlayer->getPlayerName());
            moves++;

            if (moves == 6 * 7)
            {
                DrawBoard();
                cout << "It's a draw!\n";
                break;
            }
        }
        else
        {
            cout << "Invalid move! Try again.\n";
        }
    }
}