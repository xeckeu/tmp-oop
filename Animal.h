#pragma once
#include "Container.h"
#include <string>
enum nutrition { predator, herbivore, insectivore };
class Animal : public Container
{
	nutrition eat;
public:
	Animal();
	~Animal();

	int nameSize();
	int outBird(std::ofstream &file);
	int  outFish(std::ofstream &file);
	int outAnimal(std::ofstream &file);

	void setEating(nutrition type);
	
	nutrition getEating();
	int inData(std::ifstream &file);
	int out(std::ofstream &file);
	
};

