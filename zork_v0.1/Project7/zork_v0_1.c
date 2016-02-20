#include <stdio.h>
#include <stdlib.h>

enum room{
	dinningroom,
	kitchen,
	pantry,
	bathroom,
	bedroom
};

void room(int room){
	if (room == dinningroom)
		printf("you are in the dinning room.\n You have the kitchen to the north, the bathroom to the east and the bedroom to the south.\n");
	if (room == kitchen)
		printf("you are in the kitchen.\n You have the dinning room to the south and the pantry to the east.\n");
	if (room == pantry)
		printf("you are in the pantry.\n You have the kitchen to the west.\n");
	if (room == bathroom)
		printf("you are in the bathroom.\n You have the dinning room to the west.\n");
	if (room == bedroom)
		printf("you are in the bedroom.\n You have the dinning room to the north.\n");
	printf("where do you wanna go? (n, s, w, e, q)\n");
}

int main(void){
	char input = ' ';
	int i = 0;
	while (input != 'q'){
		room(i);
		scanf_s("%c", &input, 1);
		switch (input)
		{
		case 'n':
		{
			if (i == 0) i = kitchen;
			else if (i == 4) i = dinningroom;
			else
				printf("there is a wall.\n");
		}
		break;
		case 'w':
		{
			if (i == 3) i = dinningroom;
			else if (i == 2) i = kitchen;
			else
				printf("there is a wall.\n");
		}
		break;
		case 's':
		{
			if (i == 0) i = bedroom;
			else if (i == 1) i = dinningroom;
			else
				printf("there is a wall.\n");
		}
		break;
		case 'e':
		{
			if (i == 0) i = bathroom;
			else if (i == 1) i = pantry;
			else
				printf("there is a wall.\n");
		}
		break;
		case 'q':
			break;
		default:
			break;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}