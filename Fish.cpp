#include "Fish.h"



int Fish::InData(std::ifstream & file)
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

int Fish::OutFish(std::ofstream &file)
{
	return Out(file);
}
int Fish::OutBird(std::ofstream & file)
{
	return 4;
}
int Fish::OutAnimal(std::ofstream & file)
{
	return 4;
}
int Fish::Out(std::ofstream & file)
{
	file << "name ";
	if (file.bad())
		return 1;
	file<< name << " areal ";
	if (file.bad())
		return 2;
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
		return -1;
		break;
	}

	file << "age " << age << " name size ";
	if (file.bad())
		return 3;
	file << nameSize()<<"\n";
	if (file.bad())
		return 4;
	return 0;
}

int Fish::nameSize()
{
	return name.length();
}
