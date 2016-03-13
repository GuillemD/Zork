#include "world.h"
#include "room.h"
#include "player.h"

void createWorld()
{
	room** rooms;

	rooms = new room*[4];
	for (int i = 0; i < 4; i++)
		rooms[i] = new room[4];
	//first row, setWalls(North, east, west, south).
	rooms[0][0].isRoom();
	rooms[0][0].setWalls(WALL, FREE, WALL, FREE);
	rooms[0][0].setDescription("You are in the Janitor's Room. There is a strange portal in the south and a dark passage to the right...");
	rooms[1][0].isRoom();
	rooms[1][0].setWalls(PORTAL, FREE, FREE, FREE);
	rooms[1][0].setDescription("You are in a long dark passage. Where does it end?");
	rooms[2][0].isRoom();
	rooms[2][0].setWalls(WALL, FREE, FREE, FREE);
	rooms[2][0].setDescription("You've arrived to the main street. If you go straight downwards you will find Catalonia Square.");
	rooms[3][0].isRoom();
	rooms[3][0].setWalls(WALL, WALL, FREE, FREE);
	rooms[3][0].setDescription("You've arrived to the main street. There seems to be a park in the south...");
	//second row.
	rooms[0][1].isRoom();
	rooms[0][1].setWalls(FREE, FREE, WALL, WALL);
	rooms[0][1].setDescription("You are in the operating room. There is a strange portal to the north and a dark passage to the right...");
	rooms[1][1].isRoom();
	rooms[1][1].setWalls(FREE, WALL, FREE, FREE);
	rooms[1][1].setDescription("You are in a long dark passage. Where does it end?");
	rooms[2][1].isRoom();
	rooms[2][1].setWalls(FREE, FREE, WALL, WALL);
	rooms[2][1].setDescription("Whoa! Catalonia Square is so beautiful. Only if someone could kill all those nasty pigeons...");
	rooms[3][1].isRoom();
	rooms[3][1].setWalls(FREE, WALL, WALL, FREE);
	rooms[3][1].setDescription("You are in a Park's entrance. Maybe the lake is near...");
	//third row.
	rooms[0][2].isRoom();
	rooms[1][2].isRoom();
	rooms[1][2].setWalls(FREE, WALL, WALL, FREE);
	rooms[1][2].setDescription("This is familiar... Oh right! This was your house when the murderer killed your wife... If you go down, you'll find the Living Room.");
	rooms[2][2].isRoom();
	rooms[3][2].isRoom();
	rooms[3][2].setWalls(FREE, WALL, WALL, WALL);
	rooms[3][2].setDescription("You have finally found it! You will now wake up in a moment...");
	//fourth row.
	rooms[0][3].isRoom();
	rooms[1][3].isRoom();
	rooms[1][3].setWalls(FREE, FREE, WALL, WALL);
	rooms[1][3].setDescription("This is the Living Room. It has an exit to the right. You'll find the backyard.");
	rooms[2][3].isRoom();
	rooms[2][3].setWalls(WALL, WALL, FREE, WALL);
	rooms[2][3].setDescription("You are in the backyard. The Living Room is at your left.");
	rooms[3][3].isRoom();


	for (int i = 0; i< 4; i++)
		delete rooms[i];

	delete[] rooms;
}
world::world()
{
}

world::~world()
{
}
