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

	int nameSize();
	void OutBird(std::ofstream &file);
	void OutFish(std::ofstream &file);
	void OutAnimal(std::ofstream &file);
	void setName(std::string inName);
	void setEating(nutrition type);
	std::string getName();
	nutrition getEating();
	void InData(std::ifstream &file);
	void Out(std::ofstream &file);
	void setAge(int inAge);
	int getAge();
};

