#pragma once
#include <string>
#include<fstream>
#include "Container.h"
class Bird : public Container
{
private:
	std::string name;
	bool migratory;
	int age;
public:
	Bird();
	~Bird();
	void setName(std::string inName);
	void setMigratory(bool inMigratory);
	std::string getName();
	bool getMigratory();
	void InData(std::ifstream &file);
	void Out(std::ofstream &file);
	void setAge(int inAge);
	int getAge();
};

