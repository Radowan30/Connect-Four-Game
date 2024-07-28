#ifndef GAME_PLUS_H
#define GAME_PLUS_H
#include "GameMechanics.hpp"

class GamePlus: public GameMechanics        //Inehritance
{
private:
	
    
public:
    GamePlus();
    bool isWinner(char player);     //Polymorphism, overriding
    void playGame();                //Polymorphism, overriding
};

#endif