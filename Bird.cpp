#include "Bird.h"



Bird::Bird()
{
}


Bird::~Bird()
{
}

void Bird::setName(std::string inName)
{
	name = inName;
}

void Bird::setMigratory(bool inMigratory)
{
	migratory = inMigratory;
}

std::string Bird::getName()
{
	return name;
}

bool Bird::getMigratory()
{
	return migratory;
}

void Bird::InData(std::ifstream & file)
{
	file >> name;
	file >> migratory;
	file >> age;
}

void Bird::Out(std::ofstream & file)
{
	file << name << " ";
	if(migratory)
		file<< "true.";
	else file << "false.";
	file << " age " << age << "\n";
}

void Bird::setAge(int inAge)
{
	age = inAge;
}

int Bird::getAge()
{
	return age;
}


