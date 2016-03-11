include <stdio.h>
#include "player.h"
#include "room.h"
// moure totes les funcions a un altre header
const char* QUIT = "QUIT";
const char* NORTH = "NORTH";
const char* GO_NORTH = "GO NORTH";
const char* UP = "UP";
const char* GO_UP = "GO UP";

int checkMoves(char* commando)
{
	//canviar per totes les direccions amb mes d'un commando
	if ((strcmp(commando, NORTH) == 0) || (strcmp(commando, GO_NORTH) == 0) || (strcmp(commando, UP) == 0) || (strcmp(commando, GO_UP) == 0))
	{
		return DIR_UP;
	}
	else if ((strcmp(commando, NORTH) == 0) || (strcmp(commando, GO_NORTH) == 0) || (strcmp(commando, UP) == 0) || (strcmp(commando, GO_UP) == 0))
	{

	}
	else if ((strcmp(commando, NORTH) == 0) || (strcmp(commando, GO_NORTH) == 0) || (strcmp(commando, UP) == 0) || (strcmp(commando, GO_UP) == 0))
	{

	}
	else if ((strcmp(commando, NORTH) == 0) || (strcmp(commando, GO_NORTH) == 0) || (strcmp(commando, UP) == 0) || (strcmp(commando, GO_UP) == 0))
	{

	}
	// si no es cap de les direccions, sortim per veure si es un altre tipus de commando
	else
		return -1;


}

void str_toupper(char* str) //convertint els commandos a majuscula totes les lletres. QuIt seria valid
{
	for (int i = 0; i < strlen(str); i++)
		str[i] = toupper(str[i]);
}

int main(){

	player::p;
	printf("description");

	//world.createWorld();


	while (1)
	{
		char* commando;
		gets(commando);
		str_toupper(commando);

		int move = checkMoves(commando);

		switch (move)
		{
		case 0:
			p.move(DIR_UP)
		case 1:
		case 2:
		case 3:
		}
		if (move == -1)
		{
			if (strcmp(commando, QUIT) == 0)
				return 0;
			else if (strcmp(commando, LOOK) == 0)
				p.look();
			else
				printf("Unknown commando %s", commando);
		}

	}

}


