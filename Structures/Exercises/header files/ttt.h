#ifndef _TICTACTOE_H_
#define _TICTACTOE_H_


typedef struct tictactoe
{	
	char board[3][3];
} TicTacToe;


void init(TicTacToe* ttt);
int play(TicTacToe* ttt, char mark, int x, int y);
int win(TicTacToe* ttt, char mark);
void displayBoard(TicTacToe* ttt);

#endif