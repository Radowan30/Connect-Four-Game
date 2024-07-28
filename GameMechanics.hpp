#ifndef GAME_MECHANICS_H
#define GAME_MECHANICS_H
#include "cell.hpp"
#include "PlayerProfile.hpp"

class GameMechanics
{
protected:
	string winnerPlayer;
    const PlayerProfile *player1, *player2;    //Aggregation; GameMechanics object has PlayerProfile objects
public:
    GameMechanics(){};
    cell board[6][7];  //Composition; GameMechanics object consists of cell objects. Also, it is a 2D array of cell objects
    void DrawBoard();
    virtual void playGame() = 0;            //Polymorphism, pure virtual function
    bool playMove(int, char);      
    virtual bool isWinner(char) = 0;        //Polymorphism, pure virtual function
    void setPlayers(const PlayerProfile*, const PlayerProfile*);
    void setWinnerPlayer(string);
    string getWinnerPlayer() const;
    ~GameMechanics(){};
};

#endif