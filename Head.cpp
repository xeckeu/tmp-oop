#include "Head.h"


Head::Head()
{
	begin = nullptr;
	end = nullptr;
	size = 0;
}


Head::~Head()
{
	clear();
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
//очищает список
int Head::clear()
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
	return size;
}

Element* Head::addElement(Element * addingElem)
{
	if (addingElem == nullptr)
		return nullptr;
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
	return this->end;
}

int Head::output(std::ofstream & file)
{
	file << "Container contents " << size << " elements.\n";
	int num = 0;
	auto cur = begin;
	for (int i = 0; i < size; i++)
	{
		file << i << ": ";
		if (cur->getContainer()->out(file) == 0)
			num++;
		else
		{
			file << "Fatal error\n";
			return num;
		}
		cur = cur->getNext();
	}
	return num;
}

int Head::equ(Element * f, Element * s)
{
	if (f == nullptr || s == nullptr)
		return -2;
	if (f->getSizeName() > s->getSizeName())
		return 1;
	if (f->getSizeName() == s->getSizeName())
		return 0;
		return -1;
}

int * Head::sort(Head*& newHead)
{
	int* choises = new int[this->size];
	int i = 0;
	int indChoises = 0;
	int minInd = 0;
	auto cur = this->begin;
	if (this->size == 0)
		return nullptr;
	do
	{
		cur->setSizeName( cur->getContainer()->nameSize());
		cur = cur->getNext();
	} while (cur != this->begin);
	Head* newList = new Head();
	while (this->size != 0)
	{
		minInd = 0;
		cur = this->begin;
		auto newMin = this->begin;
		int curS = this->size;
		do
		{
			if (equ(newMin, cur) == 1)
			{
				newMin = cur;
				minInd = i;
			}
			i++;
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
		choises[indChoises] = minInd;
		indChoises++;
		this->size--;
	}
	newHead = newList;
	return choises;
}

int Head::outputOne(std::ofstream & file,//файл вывода
	char type//выводимый тип
	)
{
	int num = 0;
	auto cur = begin;
	for (int i = 0; i < size; i++)
	{
		if (type == 'f')
		{
			if(cur->getContainer()->outFish(file)==0)
			num++;
		}
		else if(type=='b')
		{
			if(cur->getContainer()->outBird(file)==0)
			num++;
		}
		else if(type=='a')
		{
			if(cur->getContainer()->outAnimal(file)==0)
			num++;
		}
		cur = cur->getNext();
	}
	return num;
}



int Head::input(std::ifstream& file)
{
	int num = 0;
	while (!file.eof())
	{
		Element*newElement = new Element();
		if (newElement->setContainer( newElement->getContainer()->in(file)) !=0)
		{
			if(newElement!=nullptr)
			addElement(newElement);
			num++;
		}
	}
	return num;
}
