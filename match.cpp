#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "match.hpp"
#include "GameMechanics.hpp"
#include "GamePlus.hpp"
#include "GameDiag.hpp"


void match::setCondition(int _cond) {WinCondition = _cond;}
int match::getCondition() const {return WinCondition;}
void match::setPlayers(const PlayerProfile& _P1, const PlayerProfile& _P2){player1 = &_P1; player2 = &_P2;}

void match::startGame()
{
    cout<<"The game is between "<< player1->getPlayerName()<< " and "<<player2->getPlayerName()<<endl<<endl;
    
    while (true)
    {
        cout<<"'Choose winning condition'\nEnter 1 for horizontal and vertical matching\nEnter 2 for diagonal matching\n\nYour input: ";
        int userCondition;
        cin>> userCondition;
        setCondition(userCondition);

        system ("CLS");

        cout<<"Game starts"<<endl;

        if (WinCondition == 1) 
        {
            GameMechanics *g;
            GamePlus gp;

            g = &gp;        

            g->setPlayers(player1, player2);
            g->playGame();
            if(g->getWinnerPlayer() == player1->getPlayerName())
            {
                winner = player1;
            }

            else if (g->getWinnerPlayer() == player2->getPlayerName())
            {
                winner = player2;
            }
            break;
        }

        else if (WinCondition == 2)
        {   
            GameMechanics *g;
            GameDiag gd;

            g= &gd;

            g->setPlayers(player1, player2);
            g->playGame();
            if(g->getWinnerPlayer() == player1->getPlayerName())
            {
                winner = player1;
            }

            else if (g->getWinnerPlayer() == player2->getPlayerName())
            {
                winner = player2;
            }
            
            break;
        }

        else 
        {
            system("CLS");
            cout<< "\nInvalid Input.\n\n";
        }
    
    }
}
const PlayerProfile& match::getWinner() const {return *winner;}