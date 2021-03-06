#pragma once
#include "Container.h"
#include <fstream>
class Element
{
private:
	Element* next;
	Element* prev;
	Container* c;
	int nameSize;
public:
	Element();
	Element(Element* inElement);
	~Element();
	Element* getNext();
	Element* getPrev();
	Container* getContainer();
	void setNext(Element* inNext);
	void setPrev(Element* inPrev);
	bool setContainer(Container* inContainer);
	bool input(std::istream&file);

	int getSizeName();
	void setSizeName(int inSize);
};

