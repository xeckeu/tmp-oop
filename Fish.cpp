#include "Fish.h"



void Fish::InData(std::ifstream & file)
{
	std::string cur;
	file >> name >> cur;
	if (cur == "lake")
		this->areal = habitat::Lake;
	else if (cur == "river")
		this->areal = habitat::River;
	else if (cur == "sea")
		this->areal = habitat::Sea;
}

Fish::Fish()
{
	name = "";
}


Fish::~Fish()
{
}

void Fish::setName(std::string inName)
{
	name = inName;
}

void Fish::setAreal(habitat inAreal)
{
	areal = inAreal;
}

std::string Fish::getName()
{
	return name;
}

habitat Fish::getAreal()
{
	return areal;
}

void Fish::Out(std::ofstream & file)
{
	file << name<<" ";
	switch (areal)
	{
	case Sea:
	{
		file << "Sea\n";
		break;
	}
	case River:
	{
		file << "River\n";
		break;
	}
	case Lake: 
	{
		file << "Lake\n";
		break;
	}
	default:
		break;
	}
}
