#pragma once

#include "Element.h"
#include <fstream>
class Head
{
private:
	Element* begin;
	Element* end;
	int size;
public:
	Head();
	~Head();
	Element* getBegin();
	Element* getEnd();
	void setBegin(Element* inBegin);
	void setEnd(Element* inEnd);
	void setSize(int inSize);
	int getSize();
	void Clear();
	void addElement(Element* addingElem);
	void input(std::ifstream& file);
	void output(std::ofstream& file);
	Head* sort();
};

