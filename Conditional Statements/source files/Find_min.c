# include <stdio.h>

int Max_min(int* Nums, int NumSize, int* add_Max, int* add_min)
{
	// returns multiple values by means of POINTERS

	int count;
	int* ptr = Nums;

	for (count = 0, *(add_min) = *ptr; count < (NumSize - 1); ++count)  // to determine min
	{
		*(add_min) = (*(add_min) <= *(ptr + 1)) ? *(add_min) : *(ptr + 1);
		++ptr;
	}

	for (count = 0, *(add_Max) = *ptr; count < (NumSize - 1); ++count)  // to determine Max
	{
		*(add_Max) = (*(add_Max) >= *(ptr + 1)) ? *(add_Max) : *(ptr + 1);
		++ptr;
	}

	return;
}