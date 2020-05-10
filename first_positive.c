#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int* first_positive(int* iptr)
{
	while (*iptr <= 0)
	{
		iptr++;
	}
	return iptr;
}