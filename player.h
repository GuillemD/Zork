#ifndef PLAYER_H_
#define PLAYER_H_
#include "entity.h"
#include <stdio.h>

enum directions{DIR_UP, DIR_DOWN, DIR_LEFT, DIR_RIGHT};


class player : public entity
{
private:
	//the initial position will be constant for each game loop.
	int x, y;
	const int x_init = 0;
	const int y_init = 1;

public:

	player()
	{
		x = x_init;
		y = y_init;
	}
	~player();
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
	void help()
	{
		printf("Here is the command list:\n quit\n help\n look\n go\n open\close");
	}
	void look(room** rooms, directions direction, int x, int y)
	{
		rooms[x][y].printDescription();
	}

	
};

#endif