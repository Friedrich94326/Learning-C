#include <stdio.h>
#include <stdlib.h>
#include "My_header.h"


int place_number_sudoku(int n, int sudoku[9][9]);

int main(void)
{
	/* Sudoku */
	int i, j;
	int sudoku[9][9];
	
	/*
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf_s("%d", &sudoku[i][j]);
		}
	}

	place_number_sudoku(0, sudoku);
	*/


	/* Ex 14.1: sum of squares */

	int n, sum;
	printf("Enter a number n (do not exceed %d) = ", N);
	scanf_s("%d", &n);
	sum = sum_squares(n);
	printf("the sum of squares from 1 to n is  %d.\n", sum);

	return 0;
}