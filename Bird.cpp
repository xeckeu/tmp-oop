#include "Bird.h"



Bird::Bird()
{
}


Bird::~Bird()
{
}



void Bird::setMigratory(bool inMigratory)
{
	migratory = inMigratory;
}



bool Bird::getMigratory()
{
	return migratory;
}

int Bird::inData(std::ifstream & file)
{
	file >> name;
	if (file.fail())
	{
		return 1;
	}
	file >> migratory;
	if (file.fail())
	{
		return 2;
	}
	file >> age;
	if (file.fail())
	{
		return 3;
	}
	return 0;
}

int Bird::out(std::ofstream & file)
{
	file << "name "<< name << " migratory ";
	if (file.fail())
	{
		return 1;
	}
	if (migratory)
	{
		file << "true.";
	}
	else
	{
		file << "false.";
	}
	if (file.fail())
	{
		return 2;
	}
	file << " age " << age << " name size ";
	if (file.fail())
	{
		return 3;
	}
	file << nameSize() << "\n";
	if (file.fail())
	{
		return 4;
	}
	return 0;
}


int Bird::nameSize()
{
	return name.length();
}

int Bird::outBird(std::ofstream & file)
{
	return out(file);
}

int Bird::outFish(std::ofstream & file)
{
	return 4;
}

int Bird::outAnimal(std::ofstream & file)
{
	return 4;
}



