#ifndef CELL_H
#define CELL_H

class cell
{
private:
    char cellState = '*';
public:
    cell(){};
    char getState() const;
    void setState(char); 
    ~cell(){};
};

#endif