#pragma once
#include <fstream>
#include <string>
class Container
{
private: 
	
public:
	
	void setName(std::string inName);
	std::string getName();
	void setAge(int inAge);
	int getAge();
	static Container* in(std::ifstream &file);
	virtual int inData(std::ifstream &file) = 0; 
	virtual int out(std::ofstream &file) = 0; 
	virtual int nameSize()=0;
	virtual int outBird(std::ofstream &file) = 0;
	virtual int outFish(std::ofstream &file) = 0;
	virtual int outAnimal(std::ofstream &file) = 0;
protected:
	int age;
	std::string name;
	Container() {};
};

