#include "Head.h"



Head::Head()
{
	begin = nullptr;
	end = nullptr;
	size = 0;
}


Head::~Head()
{
	Clear();
}

Element * Head::getBegin()
{
	return new Element(begin);
}

Element * Head::getEnd()
{
	return new Element (end);
}

void Head::setBegin(Element * inBegin)
{
	begin = inBegin;
}

void Head::setEnd(Element * inEnd)
{
	end = inEnd;
}

void Head::setSize(int inSize)
{
	size = inSize;
}

int Head::getSize()
{
	return size;
}
void Head::Clear()
{
	auto erasing = begin;
	while (size > 0)
	{
		//
		auto cur = erasing->getNext();
		erasing->getNext()->setPrev(erasing->getPrev());
		erasing->getPrev()->setNext(cur);
		delete erasing;
		erasing = cur;
		size--;
		
	}
}

void Head::addElement(Element * addingElem)
{
	if (size == 0)
	{
		end = addingElem;
		begin = addingElem;
		end->setNext( begin);
		end->setPrev(begin);
		begin->setNext(end);
		begin->setPrev(end);
	}
	else
	{
		end->setNext(addingElem);
		addingElem->setNext(begin);
		addingElem->setPrev( end);
		end = addingElem;
		begin->setPrev(addingElem);
	}
	size++;
}

void Head::output(std::ofstream & file)
{
	file << "Container contents " << size << " elements.\n";
	auto cur = begin;
	for (int i = 0; i < size; i++)
	{
		file << i << ": ";
		cur->getContainer()->Out(file);
		cur = cur->getNext();
	}
}

Head * Head::sort()
{
	auto cur = this->begin;
	do
	{
		cur->setSizeName( cur->getContainer()->nameSize());
		cur = cur->getNext();
	} while (cur != this->begin);
	Head* newList = new Head();
	while (this->size != 0)
	{
		cur = this->begin;
		auto newMin = this->begin;
		int curS = this->size;
		do
		{
			if (newMin->getSizeName() > cur->getSizeName())
				newMin = cur;
			cur = cur->getNext();
			curS -= 1;
		} while (curS);
		if (newMin == this->begin)
		{
			this->begin = this->begin->getNext();
		}
		if (newMin == this->end)
		{
			this->end = this->begin->getPrev();
		}
		auto cur2 = newMin->getPrev();
		newMin->getPrev()->setNext(newMin->getNext());
		cur2->getNext()->setPrev(cur2);
		newList->addElement(newMin);
		this->size--;
	}
	return newList;
}

void Head::input(std::ifstream& file)
{
	
	while (!file.eof())
	{
		Element*newElement = new Element();
		if (newElement->setContainer( newElement->getContainer()->In(file)) !=0)
		{

			addElement(newElement);

		}
	}
}
