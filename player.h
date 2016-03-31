#include "entity.h"
#ifndef PLAYER_H_
#define PLAYER_H_

enum directions{DIR_UP, DIR_DOWN, DIR_LEFT, DIR_RIGHT};


class player : public entity
{
private:
	//the initial position will be constant for each game loop.
	int x, y;
	const int x_init = 0;
	const int y_init = 1;
	int* inventory;


public:

	player();
	~player();
	void move(int dir);
	void help();
	void look();
};

#endif