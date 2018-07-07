#ifndef _UNIT_
#define _UNIT_
#include <iostream>

class unit
{
    public:
	//unit();
	unit(std::string name, std::string type, int posX, int posY, int dam, int cHP, int mHP);
	~unit();
	
	std::string getName() const;
	std::string getType() const;
	int getPosX() const;
	int getPosY() const;
	int getDam() const;
	int getCHP() const;
	int getMHP() const;

	void operator+=(int inc);
	void operator-=(int dec);
	unit& operator=(unit& un);	
    protected:
	std::string name;
	std::string type;
	int posX;
	int posY;
	int dam;
	int cHP;
	int mHP;
};

std::ostream& operator<<(std::ostream& os, unit const& un);

#endif





