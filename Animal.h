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
	int OutBird(std::ofstream &file);
	int  OutFish(std::ofstream &file);
	int OutAnimal(std::ofstream &file);

	void setEating(nutrition type);
	
	nutrition getEating();
	int InData(std::ifstream &file);
	int Out(std::ofstream &file);
	
};

