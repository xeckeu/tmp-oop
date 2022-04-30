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
	int clear();
	Element* addElement(Element* addingElem);
	int input(std::ifstream& file);
	int output(std::ofstream& file);
	int equ(Element* f, Element* s);
	int* sort(Head*& newHead);
	int outputOne(std::ofstream& file, char type);
};

