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

int Animal::outBird(std::ofstream & file)
{
	return 4;
}

int Animal::outFish(std::ofstream & file)
{
	return 4;

}

int Animal::outAnimal(std::ofstream & file)
{
	return out(file);
}



void Animal::setEating(nutrition type)
{
	eat = type;
}



nutrition Animal::getEating()
{
	return eat;
}

int Animal::inData(std::ifstream & file)
{

	file >> name;
	if (file.fail())
	{
		return 1;
	}
	std::string type;
	file >> type;
	if (file.fail())
	{
		return 2;
	}
	if (type == "predator")
	{
		eat = predator;
	}
	else if (type == "herbivore")
	{
		eat = herbivore;
	}
	else if (type == "insectivore")
	{
		eat = insectivore;
	}
	file >> age;
	if (file.fail())
	{
		return 3;
	}
	return 0;
}

int Animal::out(std::ofstream & file)
{
	
	file <<"name "<< name << " type of eating ";
	if (file.fail())
	{
		return 1;
	}
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
	{
		return 2;
	}
	}
	file << " age " << age;
	if (file.fail())
	{
		return 3;
	}
	file<< " name size " << nameSize() << "\n";
	if (file.fail())
	{
		return 4;
	}
	return 0;
}


