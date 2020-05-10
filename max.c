#include <stdio.h>

int Max(int* iptr[], int Length)
{
	int i;
	int max, min;
	max = *iptr[0];
	min = *iptr[0];

	for (i = 1; i < Length; i++)
	{
		if ( *iptr[i] > max )
		{
			max = *iptr[i];
		}
		if (*iptr[i] < min)
		{
			min = *iptr[i];
		}
	}
	return max;
}