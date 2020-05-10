#include <stdio.h>


int sum_squares(int n)
{
	int sum = 0;

	if (n > 1)
	{
		sum = sum_squares(n - 1) + n * n;
	}
	else if(n == 1)
	{
		sum = n * n;
	}
	else
	{
		sum = 0;
	}

	return sum;
}