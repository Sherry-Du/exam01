#include "unit.h"

unit::unit(std::string name="", std::string type="", int posX=0, int posY=0, int dam=0, int cHP=0, int mHP=0)
{
	this->name = name;
	this->type = type;
	this->posX = posX;
	this->posY = posY;
	this->dam = dam;
	this->mHP = mHP;
	if(cHP > this->mHP)
		cHP = this->mHP;
	else
		this->cHP = cHP;
}

unit::~unit(){}

unit& unit::operator=(unit& u)
{
    this->name = u.getName();
    this->type = u.getType() ;
    this->posX = u.getPosX();
    this->posY = u.getPosY();
    this->dam = u.getDam();
    this->cHP = u.getCHP();
    this->mHP = u.getMHP();
    return *this;
}

std::string unit::getName() const
{
    return this->name;
}
std::string unit::getType() const
{
    return this->type;
}
int unit::getPosX() const
{
    return this->posX;
}
int unit::getDam() const
{
    return this->dam;
}
int unit::getPosY() const
{
    return this->posY;
}
int unit::getCHP() const
{
    return this->cHP;
}
int unit::getMHP() const
{
    return this->mHP;
}

void unit::operator+=(int inc)
{
    if((this->cHP + inc) >= this->mHP)
	this->cHP = this->mHP;
    else
	this->cHP += inc;
}
void unit::operator-=(int dec)
{
    if(this->cHP <= dec )
	this->cHP = 0;
    else
	this->cHP -= dec;
}

std::ostream& operator<<(std::ostream& os, unit const& un)
{
    std::cout << un.getName() << " is a " << un.getType() << " in " << un.getPosX() << "/" << un.getPosY() << " with " << un.getCHP() << "/" << un.getMHP() << "HP damaging at " << un.getDam(); 
    return os;
}


