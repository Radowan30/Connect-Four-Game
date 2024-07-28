#ifndef PLAYERPROFILE_H
#define PLAYERPROFILE_H

#include <string>

using namespace std;

class PlayerProfile
{
private:
    string player_name;
    string player_adj;

public:
    PlayerProfile();
    void setPlayerName(string);
    void setPlayerAdj(string);
    string getPlayerName() const;
    string getPlayerAdj() const;
    ~PlayerProfile();
};

#endif



