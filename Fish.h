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
	void setAge(int inAge);
	int getAge();
	void setAreal(habitat inAreal);
	std::string getName();
	habitat getAreal();
	void Out(std::ofstream &file);
private:
	int age;
	std::string name;
	habitat areal;
};

