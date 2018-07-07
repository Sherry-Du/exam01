#ifndef _MARINE_
#define _MARINE_
#include <iostream>
#include "unit.h"

class marine : public unit
{
    public:
	marine(std::string name, int posX, int posY);
	~marine();
	
	void move(int x, int y);
	void stimpack();
};

#endif
