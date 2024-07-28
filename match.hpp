#ifndef MATCH_H
#define MATCH_H
#include "PlayerProfile.hpp"


class match
{
private:
    int WinCondition;
    const PlayerProfile *player1, *player2;    //Aggregation; Match object has PlayerProfile objects
    const PlayerProfile *winner;               //Aggregation; Match object has a PlayerProfile object
public:
    match(){player1=NULL; player2=NULL;}
    void setCondition(int);
    int getCondition() const;
    void startGame();
    void setPlayers(const PlayerProfile&, const PlayerProfile&);
    const PlayerProfile& getWinner() const;
    ~match(){player1=NULL; player2=NULL; winner=NULL;}
};

#endif