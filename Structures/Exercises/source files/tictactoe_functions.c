#include <stdio.h>
#include <stdlib.h>
#include "ttt.h"


void init(TicTacToe* ttt)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			ttt->board[i][j] = '\0';
		}
	}

	return;
}

int play(TicTacToe* ttt, char mark, int x, int y)
{
	if (ttt->board[x][y] == '\0')
	{
		//printf("This move works!\n");
		ttt->board[x][y] = mark;
		return 0;
	}
	else
	{
		printf("Oops! Invalid move!\n");
		return -1;
	}
}
int win(TicTacToe* ttt, char mark)
{
	// checking of winning, might happen before the 9th round
	// vertically, horizontally, diagonally and skew-diagonally

	int count;
	int x, y;
	int i, j;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			// vertically
			count = 0;
			for (i = -2; i < 3; i++)
			{
				if ((0 <= (x + i)) && ((x + i) <= 2))
				{
					if (ttt->board[x + i][y] == mark)
					{
						count++;
					}
				}
			}
			if (count == 3)
			{
				printf("colour %c wins! \n", mark);
				return 1;
			}

			// horizontally
			count = 0;
			for (j = -2; j < 3; j++)
			{
				if ((0 <= (y + j)) && ((y + j) <= 2))
				{
					if (ttt->board[x][y + j] == mark)
					{
						count++;
					}
				}
			}
			if (count == 3)
			{
				printf("colour %c wins! \n", mark);
				return 1;
			}

			// diagonally
			count = 0;
			for (i = -2; i < 3; i++)
			{
				if ( ( 0 <= (y + i)  && (y + i) <= 2 ) && ( 0 <= (x + i) && (x + i) <= 2 ) ) // makes sure we're on the board
				{
					if (ttt->board[x + i][y + i] == mark)
					{
						count++;
					}
				}
			}
			if (count == 3)
			{
				printf("colour %c wins! \n", mark);
				return 1;
			}

			// skew-diagonally
			count = 0;
			for (i = -2; i < 3; i++)
			{
				if ((0 <= (y - i) && (y - i) <= 2) && (0 <= (x + i) && (x + i) <= 2)) // makes sure we're on the board
				{
					if (ttt->board[x + i][y - i] == mark)
					{
						count++;
					}
				}
			}
			if (count == 3)
			{
				printf("colour %c wins! \n", mark);
				return 1;
			}
		}
	}
	
	if (count < 3)
	{
		printf("Colour %c has not yet won. \n\n", mark);
		return 0;
	}

}

void displayBoard(TicTacToe* ttt)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("| %c |", ttt->board[i][j]);
		}
		printf("\n");
		printf("---------------");
		printf("\n");
	}

	return;
}