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

int Bird::InData(std::ifstream & file)
{
	file >> name;
	if (file.bad())
		return 1;
	file >> migratory;
	if (file.bad())
		return 2;
	file >> age;
	if (file.bad())
		return 3;
	return 0;
}

int Bird::Out(std::ofstream & file)
{
	file << "name "<< name << " migratory ";
	if (file.bad())
		return 1;
	if(migratory)		
		file<< "true.";
	else 
		file << "false.";
	if (file.bad())
		return 2;
	file << " age " << age << " name size ";
	if (file.bad())
		return 3;
	file << nameSize() << "\n";
	if (file.bad())
		return 4;
	return 0;
}


int Bird::nameSize()
{
	return name.length();
}

int Bird::OutBird(std::ofstream & file)
{
	return Out(file);
}

int Bird::OutFish(std::ofstream & file)
{
	return 4;
}

int Bird::OutAnimal(std::ofstream & file)
{
	return 4;
}



