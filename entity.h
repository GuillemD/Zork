#ifndef ENTITY_H_
#define ENTITY_H_
#include "mystring.h"

class entity
{
public:
	mystring name;
	mystring description;
	entity* entityList;

	void printDescription()
	{
		printf("%s", description.c_str());
	}

	void setDescription(const char* desc)
	{
		description = mystring(desc);
	}
};
#endif