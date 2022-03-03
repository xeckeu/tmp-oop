#include "Element.h"



Element::Element()
{
	next = nullptr;
	prev = nullptr;
	c = nullptr;
}

Element::Element(Element * inElement)
{
	next = inElement->next;
	prev = inElement->prev;
	c = inElement->c;
}


Element::~Element()
{
}

Element * Element::getNext()
{
	return new Element (next);
}

Element * Element::getPrev()
{
	return new Element (prev);
}

Container * Element::getContainer()
{
	return c;
}

void Element::setNext(Element * inNext)
{
	next = inNext;
}

void Element::setPrev(Element * inPrev)
{
	prev = inPrev;
}

bool Element::setContainer(Container * inContainer)
{
	if (inContainer != 0)
	{
		c = inContainer;
		return 1;
	}
	else return 0;
}

bool Element::input(std::istream & file)
{

	return false;
}

int Element::getSizeName()
{
	return nameSize;
}

void Element::setSizeName(int inSize)
{
	nameSize = inSize;
}
