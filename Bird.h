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
	int InData(std::ifstream &file);
	int Out(std::ofstream &file);
	
	int nameSize();
	int OutBird(std::ofstream &file);
	int OutFish(std::ofstream &file);
	int OutAnimal(std::ofstream &file);
};

