#pragma once
#include <string>
#include<fstream>
#include "Container.h"
class Bird : public Container
{
private:
	std::string name;//� container
	bool migratory;
	int age;//� container
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
	int nameSize();
	void OutBird(std::ofstream &file);
	void OutFish(std::ofstream &file);
	void OutAnimal(std::ofstream &file);
};

