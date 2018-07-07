#include "marine.h"

marine::marine(std::string name, int posX, int posY):unit(name, "Marine", posX,posY,6,40,40)
{
    std::cout << "Do you want a piece of me, boy ?" << std::endl;
}

marine::~marine()
{
    std::cout << "Aaaargh..." << std::endl;
}

void marine::move(int x, int y)
{
    posX = x;
    posY = y;
    std::cout << "Rock'n'roll !!!" << std::endl;
}

void marine::stimpack()
{
    
    std::cout << "Ho yeah..." << std::endl;
}

