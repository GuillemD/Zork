#pragma once
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
const int WALL = 0;
const int FREE = 1;
const int CLOSED_DOOR = 2;
const int OPEN_DOOR = 3;
const int PORTAL = 4;
class room
{
private:
	bool isroom;
	char* description;
	int up, down, left, right;



	// continuar tots els comandos

public:
	void room::setIsRoom(bool _isroom);
	void room::setWalls(int _up, int _down, int _left, int _right);


	room();
	~room();
	//this shows the description ef the current room.
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
		case DIR_UP:
			n = up; break;
		case DIR_UP:
			n = up; break;

		}
		return n;
	}
};

