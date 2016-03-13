#include "room.h"
#include "player.h"

void setDoorState(int state)
{
	room[x][y].right = OPEN_DOOR; 
	room[x][y].left = OPEN_DOOR;
}
void room::setIsRoom(bool _isroom)
{
	isroom = _isroom;
}
void room::setWalls(int _up, int _down, int _left, int _right) //defining wall types
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


void room::setDescription(char* m_desc) 
{
	m_desc = new char[200];
	strcpy(description, m_desc);
}

void room::printDescription()
{
	printf("%s", description);
}

room::~room()
{
}