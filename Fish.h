#pragma once
#include <string>
#include <fstream>
#include "Container.h"
enum habitat { Sea, River, Lake };

class Fish : public Container
{

public:
	int InData(std::ifstream &file);
	Fish();
	~Fish();
	
	
	void setAreal(habitat inAreal);
	
	habitat getAreal();
	int Out(std::ofstream &file);
	int nameSize();
	int OutFish(std::ofstream &file);
	int OutBird(std::ofstream &file);
	int OutAnimal(std::ofstream &file);
private:
	
	habitat areal;
};

