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

void Element::setContainer(Container * inContainer)
{
	c = inContainer;
}

bool Element::input(std::istream & file)
{
	return false;
}
