#pragma once
#include <string>
#include<fstream>
#include "Container.h"
class Bird : public Container
{
private:
	std::string name;//â container
	bool migratory;
	int age;//â container
public:
	Bird();
	~Bird();
	
	void setMigratory(bool inMigratory);
	
	bool getMigratory();
	int inData(std::ifstream &file);
	int out(std::ofstream &file);
	
	int nameSize();
	int outBird(std::ofstream &file);
	int outFish(std::ofstream &file);
	int outAnimal(std::ofstream &file);
};

