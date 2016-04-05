#include <stdio.h>
#include "player.h"
#include "room.h"
#include "otherfunctions.h"
#include "world.h"
#include "MemLeaks.h"

int main(){
	ReportMemoryLeaks();
	
	//printf("Where am I? Why am I in an operating room? What is this terrible headache?\n I'm starting to remember everything... I wanted to end with my nightmares, but this seems just like one...\n I better start looking for the lake. My nightmares always stop when I find her in the lake. ");
	world w = world();
	w.createWorld();
	w.play();

	

}


