#include "PlayerProfile.hpp"

// Default constructor
PlayerProfile::PlayerProfile()
{
}

// Setter for player name
void PlayerProfile::setPlayerName(string _name)
{
    player_name = _name;
}

// Setter for player adjective
void PlayerProfile::setPlayerAdj(string _adj)
{
    player_adj = _adj;
}

// Getter for player name
string PlayerProfile::getPlayerName() const
{
    return player_name;
}

// Getter for player adjective
string PlayerProfile::getPlayerAdj() const
{
    return player_adj;
}

// Destructor
PlayerProfile::~PlayerProfile()
{
}



