#ifndef ONEvONE_H
#define ONEvONE_H
#include "PlayerProfile.hpp"

class OneVOne
{
private:
	PlayerProfile P1, P2;  //Compostion; OneVOne object consists of PlayerProfile objects
    
public:
    
    OneVOne();
    PlayerProfile& getPlayerOne();
    PlayerProfile& getPlayerTwo();
    ~OneVOne();
};

#endif