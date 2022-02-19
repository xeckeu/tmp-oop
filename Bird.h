#pragma once
#include <string>
#include<fstream>
#include "Container.h"
class Bird : public Container
{
private:
	std::string name;
	bool migratory;
public:
	Bird();
	~Bird();
	void setName(std::string inName);
	void setMigratory(bool inMigratory);
	std::string getName();
	bool getMigratory();
	void InData(std::ifstream &file);
	void Out(std::ofstream &file);
};

