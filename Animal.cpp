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

void Animal::OutBird(std::ofstream & file)
{
	return;
}

void Animal::OutFish(std::ofstream & file)
{
	return;

}

void Animal::OutAnimal(std::ofstream & file)
{
	Out(file);
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
	file << " age " << age;
}

void Animal::setAge(int inAge)
{
	int age = inAge;
}

int Animal::getAge()
{
	return age;
}
