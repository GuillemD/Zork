#pragma once

const int DIR_UP = 1;
const int DIR_DOWN = 2;
const int DIR_LEFT = 3;
const int DIR_RIGHT = 4;

class player
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
