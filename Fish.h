#pragma once
#include <string>
#include <fstream>
#include "Container.h"
enum habitat { Sea, River, Lake };

class Fish : public Container
{

public:
	int inData(std::ifstream &file);
	Fish();
	~Fish();
	
	
	void setAreal(habitat inAreal);
	
	habitat getAreal();
	int out(std::ofstream &file);
	int nameSize();
	int outFish(std::ofstream &file);
	int outBird(std::ofstream &file);
	int outAnimal(std::ofstream &file);
private:
	
	habitat areal;
};

