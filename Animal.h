#pragma once
#include "Container.h"
#include <string>
enum nutrition { predator, herbivore, insectivore };
class Animal : public Container
{
	std::string name="";
	nutrition eat;
	int age;
public:
	Animal();
	~Animal();
	void setName(std::string inName);
	void setEating(nutrition type);
	std::string getName();
	nutrition getEating();
	void InData(std::ifstream &file);
	void Out(std::ofstream &file);
	void setAge(int inAge);
	int getAge();
};

