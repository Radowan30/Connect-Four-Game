#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "OneVOne.hpp"
#include "tournament.hpp"
#include "PlayerProfile.hpp"
#include "match.hpp"

int main()
{
    char playAgain = 'y';

    while(playAgain == 'y' || playAgain == 'Y')
   { 
    int userMode;
    cout<<"Choose Game Mode:"<<endl;
    cout<<"1. 1v1 Mode (Two Players)\n2. Tournament Mode (Four Players)\n3. Exit Game\n\nEnter 1,2, or 3: ";
    cin>> userMode;
    cin.ignore();

    system ("CLS");

    if (userMode == 1)
    {
        OneVOne o;
        system ("CLS");

        match m;
        m.setPlayers(o.getPlayerOne(), o.getPlayerTwo());
        m.startGame();

        cout<<"\nDo you want to play again? [y/n]";
        cin>> playAgain;
        system ("CLS");
    }

    else if (userMode == 2)
    {
        tournament t;
        system ("CLS");

        match m1, m2, m3;
        m1.setPlayers(t.getPlayerOne(), t.getPlayerTwo());
        m2.setPlayers(t.getPlayerThree(), t.getPlayerFour());
        cout<<"First Match."<<endl;
        m1.startGame();

        cout<<endl;
        system("PAUSE");
        system ("CLS");

        cout<<"Second Match."<<endl;
        m2.startGame();
        
        cout<<endl;
        system("PAUSE");
        system ("CLS");
        
        m3.setPlayers(m1.getWinner(), m2.getWinner());
        cout<<"Final Match."<<endl;
        m3.startGame();
        cout<<"\nCongratulations! "<< m3.getWinner().getPlayerName()<<" wins the tournament!"<<endl;
        cout<<"\nDo you want to play again? [y/n]";
        cin>> playAgain;
        system ("CLS");
    }

    else if(userMode==3)
    {   
        system("CLS");
        cout<<"Thank you for playing!"<<endl;
        break;
    }

    else
        cout<<"Invalid input."<<endl;
   }
return 0;
}