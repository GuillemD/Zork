#include "room.h"


void room::setIsRoom(bool _isroom)
{
	isroom = _isroom;
}
void room::setWalls(int _up, int _down, int _left, int _right) //definint el tipus de parets 
{
	up = _up;
	down = _down;
	left = _left;
	right = _right;
}
room::room()
{
	isroom = false;
}


room::setDescription(char* m_desc)
{
	m_desc = new char[200];
	strcpy(description, m_desc);
}

room::printDescription()
{
	printf("%s", description);
}

room::~room()
{
}