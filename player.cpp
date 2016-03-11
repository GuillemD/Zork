#include "player.h"
#include <stdio.h>


player::player()
{
	//placing the inital position of the player.
	x = x_init;
	y = y_init;

	//allocating memory for 15 items of the inventory.
	inventory = new int[15];

}
void move(int dir, room** rooms)
{
	if (x <= 0 && dir == DIR_LEFT)
		printf("You cannot move in this direction!");
	else if (y <= 0 && dir == DIR_UP)
		printf("You cannot move in this direction!");
	else if (y >= 5 && dir == DIR_RIGHT)
		printf("You cannot move in this direction!");
	else if (x >= 4 && dir == DIR_DOWN)
		printf("You cannot move in this direction!");
	else
	{
		if (dir == DIR_UP)
		{
			int what = rooms[x][y].getWallInfo(dir);
			switch (what)
			{
			}
		}
	}
}
void look()
{
	rooms[x][y].printDescription();
}
player::~player()
{
	//freeing memory allocated for the inventory.
	delete[] inventory;
}

