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
}

void Bird::Out(std::ofstream & file)
{
	file << name << " ";
	if(migratory)
		file<< "true.\n";
	else file << "false.\n";
}

int Bird::nameSize()
{
	return name.length;
}


