#include "Animal.h"
#include <string>


Animal::Animal()
{
}


Animal::~Animal()
{
}

int Animal::nameSize()
{
	return name.length();
}

int Animal::OutBird(std::ofstream & file)
{
	return 4;
}

int Animal::OutFish(std::ofstream & file)
{
	return 4;

}

int Animal::OutAnimal(std::ofstream & file)
{
	return Out(file);
}



void Animal::setEating(nutrition type)
{
	eat = type;
}



nutrition Animal::getEating()
{
	return eat;
}

int Animal::InData(std::ifstream & file)
{

	file >> name;
	if (file.bad())
		return 1;
	std::string type;
	file >> type;
	if (file.bad())
		return 2;
	if (type == "predator")
		eat = predator;
	else if (type == "herbivore")
		eat = herbivore;
	else if (type == "insectivore")
		eat = insectivore;
	file >> age;
	if (file.bad())
		return 3;
	return 0;
}

int Animal::Out(std::ofstream & file)
{
	
	file <<"name "<< name << " type of eating ";
	if (file.bad())
		return 1;
	switch (eat)
	{
	case predator:
	{
		file << "predator ";
		break;
	}
	case  herbivore:
	{
		file << "herbivore ";
		break;
	}
	case insectivore:
	{
		file << "insectivore ";
		break;
	}
	default:
		break;
	}
	if (file.bad())
		return 2;
	file << " age " << age;
	if (file.bad())
		return 3; 
	file<< " name size " << nameSize() << "\n";
	if (file.bad())
		return 4;
	return 0;
}


