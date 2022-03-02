#include "Animal.h"
#include <string>


Animal::Animal()
{
}


Animal::~Animal()
{
}

void Animal::setName(std::string inName)
{
	name = inName;
}

void Animal::setEating(nutrition type)
{
	eat = type;
}

std::string Animal::getName()
{
	return name;
}

nutrition Animal::getEating()
{
	return eat;
}

void Animal::InData(std::ifstream & file)
{
	file >> name;
	std::string type;
	file >> type;
	if (type == "predator")
		eat = predator;
	else if (type == "herbivore")
		eat = herbivore;
	else if (type == "insectivore")
		eat = insectivore;
}

void Animal::Out(std::ofstream & file)
{
	file << name << " ";
	switch (eat)
	{
	case predator:
	{
		file << "predator\n";
		break;
	}
	case  herbivore:
	{
		file << "herbivore\n";
		break;
	}
	case insectivore:
	{
		file << "insectivore\n";
		break;
	}
	default:
		break;
	}
}
