#include <iostream>
#include <string>
using namespace std;

#include "GameMechanics.hpp"
void GameMechanics::setPlayers(const PlayerProfile* _P1, const PlayerProfile* _P2){player1 = _P1; player2 = _P2;}

void GameMechanics::DrawBoard()
{
    for (int row = 0; row < 6; ++row)
    {
        for (int col = 0; col < 7; ++col)
        {
            cout << "| " << board[row][col].getState() << " ";
        }
        cout << "|\n";
    }
    for (int col = 0; col < 7; ++col)
    {
        cout << "+---";
    }
    cout << "+\n";
    for (int col = 0; col < 7; ++col)
    {
        cout << "  " << col + 1 << " ";
    }
    cout << "\n";
}

bool GameMechanics::playMove(int col, char playerToken)
{
    if (col < 1 || col > 7 || board[0][col].getState() != '*')
        return false;

    for (int row = 6 - 1; row >= 0; --row)
    {
        if (board[row][col - 1].getState() == '*')
        {
            board[row][col - 1].setState(playerToken);
            return true;
        }
    }
    return false;
}

void GameMechanics::setWinnerPlayer(string _winner){winnerPlayer = _winner;}
string GameMechanics::getWinnerPlayer() const {return winnerPlayer;}
