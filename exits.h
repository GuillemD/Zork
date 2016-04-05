#ifndef EXITS_H_
#define EXITS_H_

#include "mystring.h"
#include "entity.h"

class exits : public entity
{
public:
	mystring exitname;
	mystring exitdescription;
};

#endif 