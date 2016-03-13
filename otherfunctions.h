#ifndef _OTHERFUNCTIONS_H_
#define _OTHERFUNCTIONS_H_

//SPECIAL COMMANDS
const char* QUIT = "QUIT";
const char* LOOK = "LOOK";
const char* HELP = "HELP";
//NORTH
const char* NORTH = "NORTH";
const char* GO_NORTH = "GO NORTH";
const char* UP = "UP";
const char* GO_UP = "GO UP";
//SOUTH
const char* SOUTH = "SOUTH";
const char* GO_SOUTH = "GO SOUTH";
const char* DOWN = "DOWN";
const char* GO_DOWN = "GO DOWN";
//WEST
const char* WEST = "WEST";
const char* GO_WEST = "GO WEST";
const char* LEFT = "LEFT";
const char* GO_LEFT = "GO LEFT";
//EAST
const char* EAST = "EAST";
const char* GO_EAST = "GO EAST";
const char* RIGHT = "RIGHT";
const char* GO_RIGHT = "GO RIGHT";

int checkMoves(char* command)
{
	//the directions have more than one command, so we make all viable
	if ((strcmp(command, NORTH) == 0) || (strcmp(command, GO_NORTH) == 0) || (strcmp(command, UP) == 0) || (strcmp(command, GO_UP) == 0))
	{
		return DIR_UP;
	}
	else if ((strcmp(command, SOUTH) == 0) || (strcmp(command, GO_SOUTH) == 0) || (strcmp(command, DOWN) == 0) || (strcmp(command, GO_DOWN) == 0))
	{
		return DIR_DOWN;
	}
	else if ((strcmp(command, WEST) == 0) || (strcmp(command, GO_WEST) == 0) || (strcmp(command, LEFT) == 0) || (strcmp(command, GO_LEFT) == 0))
	{
		return DIR_LEFT;
	}
	else if ((strcmp(command, EAST) == 0) || (strcmp(command, GO_EAST) == 0) || (strcmp(command, RIGHT) == 0) || (strcmp(command, GO_RIGHT) == 0))
	{
		return DIR_RIGHT;
	}
	//if the command isn't a direction
	else
		return -1;

}

void str_toupper(char* str) //converting all commands to upper cased values: QuIt would be valid.
{
	for (int i = 0; i < strlen(str); i++)
		str[i] = toupper(str[i]);
}

#endif