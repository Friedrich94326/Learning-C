#include <stdio.h>

int place_number_sudoku(int n, int sudoku[9][9])
{
	int i, j;
	int conflict, try;
	int row, col, block_row, block_col;

	if (n == 81)
	{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				printf("%d ", sudoku[i][j]);
			}
			printf("\n");
		}
		return 1;
	}

	row = n / 9;
	col = n % 9;
	block_row = row / 3;
	block_col = col / 3;

	conflict = 0;

	if (sudoku[row][col] != 0)
	{
		return(place_number_sudoku(n+1, sudoku));
	}
	for (try = 1; try <= 9; try++)
	{
		conflict = 0;
		for (i = 0; i < 9 && !conflict ; i++)
		{
			if (((col != i) && (sudoku[row][i] == try)) || (row != i) && (sudoku[i][col] == try))
			{
				conflict = 1;
			}
		}


		if (!conflict)
		{
			for (i = 0; i < 3 && !conflict; i++)
			{
				for (j = 0; j < 3 && !conflict; j++)
				{
					if (sudoku[3 * block_row + i][3 * block_col + j] == try )
					{
						conflict = 1;
					}
				}
			}

			if (!conflict)
			{
				sudoku[row][col] = try;
				if (place_number_sudoku(n + 1, sudoku))
				{
					return 1;
				}
			}
		}
	}

	sudoku[row][col] = 0;

	return 0;
}