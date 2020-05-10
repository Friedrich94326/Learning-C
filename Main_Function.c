#include <stdio.h>
#include <stdlib.h>
#include "colour.h"
#include "grade.h"
#include "ttt.h"
#include "employee.h"

int main(void)
{


	/* Ex 15.1: Colour description */

	/*
	int n;
	int i;
	int r, g, b;
	Colour c[N], average;

	printf("Evaluating brightness of colours from their RGB values.\n");

	printf("Enter the number of different colours: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Give the RGB value of the %d-th colour: ", i);
		scanf_s("%d%d%d", &r, &g, &b);
		initColour(&c[i], r, g, b);
		printColour(&c[i]);
	}

	printf("Average colour: ");

	average = averageColour(c, n);
	printColour(&average);

	printf("\n\n");

	*/

	/* Ex 15.2: Averaging student's grades */

	/*
	printf("Now we're gonna average a student's grades: \n");
	struct student std;
	scanf_s("%d", &(std.count));

	for (i = 0; i < std.count; i++)
	{
		scanf_s("%d", &(std.grade[i]));
	}

	printf("%f \n\n", average_grade(&std));
	*/

	/* Ex 15.4: Tictactoe */

	
	printf("Here we start to play a tictactoe! \n");

	TicTacToe ttt_game;
	init(&ttt_game);

	char mark;  // choose 256: black & 128: middle gray
	int x, y;
	int validity;

	printf("You're mark (enter o / x ): ");
	scanf_s(" %c", &mark);

	

	/*
	do
	{
		printf("now it is color %d 's turn: \n", colour);
		printf("indicate a position (x,y) to draw: ");
		scanf_s("%d %d", &x, &y);
		validity = play(&ttt_game, colour, x, y);
		if (validity == -1)
		{
			printf("Game is over!!!\n\n");
		}
		if (colour == 255)
		{
			colour = 119;
		}
		else
		{
			colour = 255;
		}

	} while (win( &ttt_game, colour) == 0);
	*/
	
	while (1)
	{
		
		printf("now it is mark %c's turn: \n", mark);
		printf("indicate a position (x,y) to draw: ");
		scanf_s("%d %d", &x, &y);
		validity = play(&ttt_game, mark, x, y);
		displayBoard(&ttt_game);

		if (validity == -1)
		{
			printf("Game is over!!!\n\n");
			break;
		}

		if (win(&ttt_game, mark) == 1)
		{
			printf("Mark %c wins and game is over!\n\n", mark);
			break;
		}

		if (mark == 'o')
		{
			mark = 'x';
		}
		else
		{
			mark = 'o';
		}
	}

	printf("\n\n");
	

	/* Ex 15.6: Relation between employees */

	
	/*
	printf("Here we want to determine the relation between any two employees in a company.\n");

	int NumEmployees;
	int k;
	printf("number of employees ( do not exceed 20): ");
	scanf_s("%d", &NumEmployees);

	Employee staff[20];

	
	for (k = 0; k < NumEmployees; k++)
	{
		printf("***the %d-th employee: \n", k);
		printf("id: ");
		scanf_s("%d", &(staff[k].id));
		printf("first name: ");
		scanf_s(" %s", staff[k].first_name, sizeof( staff[k].first_name) );
		printf("last name: ");
		scanf_s(" %s", staff[k].last_name, sizeof(staff[k].last_name));
		printf("boss id: ");
		scanf_s("%d", &(staff[k].boss_id));
	}

	for (k = 0; k < NumEmployees; k++)
	{
		printf("layer of the %d-th employee: %d \n", k, LayersCount(&staff[k], staff, NumEmployees));	
	}
	*/
	// to be completed

	return 0;
}