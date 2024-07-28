#include <iostream>
#include <string>
using namespace std;

#include "cell.hpp"

char cell::getState() const{return cellState;}
void cell::setState(char _state)
{
    if (_state == 'X')
    {
        cellState = 'X';
    }

    else if (_state == 'O')
    {
        cellState = 'O';
    }
}