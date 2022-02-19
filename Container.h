#pragma once
#include <fstream>
class Container
{
public:
	
	static Container* In(std::ifstream &file);
	virtual void InData(std::ifstream &file) = 0; 
	virtual void Out(std::ofstream &file) = 0; 
protected:
	Container() {};
};

