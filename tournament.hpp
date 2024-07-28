#ifndef TOURNAMNET_H
#define TOURNAMNET_H
#include "PlayerProfile.hpp"
class tournament
{
private:
	PlayerProfile P1, P2, P3, P4; //Composition; Tounament object consists of PlayerProfile objects
    
public:
    tournament();
    PlayerProfile& getPlayerOne();
    PlayerProfile& getPlayerTwo();
    PlayerProfile& getPlayerThree();
    PlayerProfile& getPlayerFour();
    ~tournament();
};

#endif