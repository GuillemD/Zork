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
	mystring roomname;
	bool isroom;
	mystring roomdescription;
	int up, down, left, right;

public:
	void room::setIsRoom(bool _isroom)
	{
		isroom = _isroom;
	}
	void room::setWalls(int _up, int _down, int _left, int _right)
	{
		up = _up;
		down = _down;
		left = _left;
		right = _right;
	}
	


	room()
	{
		isroom = false;
	}
	~room();

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
