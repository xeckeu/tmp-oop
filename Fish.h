#pragma once
#include <string>
#include <fstream>
#include "Container.h"
enum habitat { Sea, River, Lake };

class Fish : public Container
{

public:
	void InData(std::ifstream &file);
	Fish();
	~Fish();
	void setName(std::string inName);
	void setAreal(habitat inAreal);
	std::string getName();
	habitat getAreal();
	void Out(std::ofstream &file);
	void OutFish(std::ofstream &file);
private:

	std::string name;
	habitat areal;
};

