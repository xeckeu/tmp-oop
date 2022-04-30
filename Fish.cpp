#include "Fish.h"



int Fish::inData(std::ifstream & file)
{
	std::string cur;
	file >> name;
	if (file.bad())
		return 1; 
	file>> cur;
	if (file.bad())
		return 2;
	
	if (cur == "lake")
		this->areal = habitat::Lake;
	else if (cur == "river")
		this->areal = habitat::River;
	else if (cur == "sea")
		this->areal = habitat::Sea;
	else
	{
		return 2;
	}
	file >> age;
	if (file.bad())
		return 3;
	return 0;
}

Fish::Fish()
{
	name = "";
}


Fish::~Fish()
{
}



void Fish::setAreal(habitat inAreal)
{
	areal = inAreal;
}



habitat Fish::getAreal()
{
	return areal;
}

int Fish::outFish(std::ofstream &file)
{
	return out(file);
}
int Fish::outBird(std::ofstream & file)
{
	return 4;
}
int Fish::outAnimal(std::ofstream & file)
{
	return 4;
}
int Fish::out(std::ofstream & file)
{
	file << "name ";
	file<< name << " areal ";
	if (file.fail())
		return 1;
	switch (areal)
	{
	case Sea:
	{
		file << "Sea ";
		break;
	}
	case River:
	{
		file << "River ";
		break;
	}
	case Lake: 
	{
		file << "Lake ";
		break;
	}
	default:
		return 2;
		break;
	}

	file << "age " << age << " name size ";
	if (file.fail())
		return 3;
	file << nameSize()<<"\n";
	if (file.fail())
		return 4;
	return 0;
}

int Fish::nameSize()
{
	return name.length();
}
