#include <iostream>
#include <string>
using namespace std;

#include "tournament.hpp"

tournament::tournament()
{
    string PlayerOneName;
    cout<<"Player 1, Enter your name: ";
    getline(cin,PlayerOneName);
    P1.setPlayerName(PlayerOneName);

    string PlayerOneAdj;
    cout<<"Enter your favorite adjective: ";
    getline(cin,PlayerOneAdj);
    P1.setPlayerAdj(PlayerOneAdj);

    cout<<endl;

    string PlayerTwoName;
    cout<<"Player 2, Enter your name: ";
    getline(cin,PlayerTwoName);
    P2.setPlayerName(PlayerTwoName);

    string PlayerTwoAdj;
    cout<<"Enter your favorite adjective: ";
    getline(cin,PlayerTwoAdj);
    P2.setPlayerAdj(PlayerTwoAdj);

    cout<<endl;

    string PlayerThreeName;
    cout<<"Player 3, Enter your name: ";
    getline(cin,PlayerThreeName);
    P3.setPlayerName(PlayerThreeName);

    string PlayerThreeAdj;
    cout<<"Enter your favorite adjective: ";
    getline(cin,PlayerThreeAdj);
    P3.setPlayerAdj(PlayerThreeAdj);

    cout<<endl;

    string PlayerFourName;
    cout<<"Player 4, Enter your name: ";
    getline(cin,PlayerFourName);
    P4.setPlayerName(PlayerFourName);

    string PlayerFourAdj;
    cout<<"Enter your favorite adjective: ";
    getline(cin,PlayerFourAdj);
    P4.setPlayerAdj(PlayerFourAdj);
}

PlayerProfile& tournament::getPlayerOne(){return P1;}
PlayerProfile& tournament::getPlayerTwo(){return P2;}
PlayerProfile& tournament::getPlayerThree(){return P3;}
PlayerProfile& tournament::getPlayerFour(){return P4;}
tournament::~tournament(){};