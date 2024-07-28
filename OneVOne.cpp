#include <iostream>
#include <string>
using namespace std;

#include "OneVOne.hpp"

OneVOne::OneVOne()
{
    string PlayerOneName;
    cout<<"Player 1, Enter your name: ";
    getline(cin,PlayerOneName);
    P1.setPlayerName(PlayerOneName);

    string PlayerOneAdj;
    cout<<"Enter your favorite adjective: ";
    getline(cin,PlayerOneAdj);
    P1.setPlayerAdj(PlayerOneAdj);

    cout<< endl;

    string PlayerTwoName;
    cout<<"Player 2, Enter your name: ";
    getline(cin,PlayerTwoName);
    P2.setPlayerName(PlayerTwoName);

    string PlayerTwoAdj;
    cout<<"Enter your favorite adjective: ";
    getline(cin,PlayerTwoAdj);
    P2.setPlayerAdj(PlayerTwoAdj);
}

PlayerProfile& OneVOne::getPlayerOne(){return P1;}
PlayerProfile& OneVOne::getPlayerTwo(){return P2;}

OneVOne::~OneVOne(){};