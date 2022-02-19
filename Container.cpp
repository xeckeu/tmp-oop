#include "Container.h"
#include "Bird.h"
#include "Fish.h"




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
		
	default:
		return 0;
	}
	c->InData(file);
	return c;
}


