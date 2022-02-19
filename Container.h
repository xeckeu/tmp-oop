#pragma once
#include <fstream>
#include "Bird.h"
#include "Fish.h"
class Container
{
public:
	
	static bool In(std::ifstream &file);
	virtual void InData(std::ifstream &file) = 0; 
	virtual void Out(std::ofstream &file) = 0; 
protected:
	Container() {};
};

