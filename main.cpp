#include <stdio.h>
#include "player.h"
#include "room.h"
#include "otherfunctions.h"
#include "world.h"

int main(){

	player::p; 
	printf("Where am I? Why am I in an operating room? What is this terrible headache?\n I'm starting to remember everything... I wanted to end with my nightmares, but this seems just like one...\n I better start looking for the lake. My nightmares always stop when I find her in the lake. ");

	void createWorld();


	while (1)
	{
		char* commando;
		gets(commando);
		str_toupper(commando);

		int move = checkMoves(commando);

		switch (move)
		{
		case 0:
			p.move(DIR_UP); break; 
		case 1:
			p.move(DIR_LEFT); break;
		case 2:
			p.move(DIR_RIGHT); break;
		case 3:
			p.move(DIR_DOWN); break;
		}
		if (move == -1)
		{
			if (strcmp(commando, QUIT) == 0)
				return 0;
			else if (strcmp(commando, LOOK) == 0)
				void look();
			else if (strcmp(commando, HELP) == 0)
				void help();
			else
				printf("Unknown commando %s", commando);
		}

	}

}


