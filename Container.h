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
	static Container* In(std::ifstream &file);
	virtual int InData(std::ifstream &file) = 0; 
	virtual int Out(std::ofstream &file) = 0; 
	virtual int nameSize()=0;
	virtual int OutBird(std::ofstream &file) = 0;
	virtual int OutFish(std::ofstream &file) = 0;
	virtual int OutAnimal(std::ofstream &file) = 0;
protected:
	int age;
	std::string name;
	Container() {};
};

