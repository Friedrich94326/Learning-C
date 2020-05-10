#include <stdio.h>
#include <math.h>

void Farthest_Coordinate(float** Points, int ArraySize)
{
	int i;
	double dist[100];
	double tempX, tempY;
	
	for (i = 0; i < ArraySize; ++i)
	{
		tempX = (double) **(Points + i);
		tempY = (double) *(*(Points + i) + 1);

		dist[i] = sqrt( tempX * tempX + tempY * tempY );
	}

	double* ptr = dist;
	double* add_min = ptr;
	double* add_Max = ptr;

	

	for (i = 0; i < (ArraySize - 1); ++i)  // to determine min
	{
		*(add_min) = (*(add_min) <= *(ptr + 1)) ? *(add_min) : *(ptr + 1);
		++ptr;
	}

	for (i = 0; i < (ArraySize - 1); ++i)  // to determine Max
	{
		*(add_Max) = (*(add_Max) >= *(ptr + 1)) ? *(add_Max) : *(ptr + 1);
		++ptr;
	}



	return;
}