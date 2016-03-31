#include "entity.h"
#ifndef ROOM_H_
#define ROOM_H_
#include <string>
#include <stdio.h>
/**
For up, down, left, right we define the following values:
0=wall;
1=free;
2=closed door;
3=open door;
4=portal;
*/

enum exittype{ WALL, FREE, CLOSED_DOOR, OPEN_DOOR, PORTAL };

class room : public entity
{
private:
	bool isroom;
	char* description;
	int up, down, left, right;

public:
	void room::setIsRoom(bool _isroom);
	void room::setWalls(int _up, int _down, int _left, int _right);
	void room::setDescription(char* m_desc);
	void const room::printDescription();


	room();
	~room();
	//this shows the description of the current room.
	void showDesc()
	{
		printf(description.c_str());
	}
	//checking if the position we are going is a room or not.
	bool isRoom()
	{
		return isRoom;
	}
	int getWallInfo(int dir)
	{
		int n;
		switch (dir)
		{
		case DIR_UP:
			n = up; break;
		case DIR_DOWN:
			n = down; break;
		case DIR_LEFT:
			n = left; break;
		case DIR_RIGHT:
			n = right; break;

		}
		return n;
	}
};
#endif
