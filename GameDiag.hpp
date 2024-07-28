#ifndef GAME_DIAG_H
#define GAME_DIAG_H
#include "GameMechanics.hpp"

class GameDiag: public GameMechanics        //Inehritance
{
private:
	
    
public:
    GameDiag();
    bool isWinner(char player);     //Polymorphism, overriding
    void playGame();                //Polymorphism, overriding
};

#endif