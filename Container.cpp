#include "Container.h"
#include "Bird.h"
#include "Fish.h"

#include "Animal.h"


void Container::setName(std::string inName)
{
	name = inName;
}

std::string Container::getName()
{
	return name;
}

void Container::setAge(int inAge)
{
	age = inAge;
}

int Container::getAge()
{
	return age;
}

Container* Container::In(std::ifstream & file)
{
	Container *c;
	char k;
	file >> k;
	switch (k) {
	case 'f':
	{
		c = new Fish();
		break;
	}
	case 'b':
	{
		c = new Bird(); 
		break;
	}
	case 'a':
	{
		c = new Animal();
		break;
	}
		
	default:
		return 0;
	}
	c->InData(file);
	return c;
}


