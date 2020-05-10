#include <stdio.h>
#include <stdlib.h>
#include "grade.h"

float average_grade(struct student* std_ptr)
{

	if (std_ptr->count == 0)
	{
		return 0.0;
	}
	else
	{
		int n;
		n = (std_ptr->count);
		int i;
		float sum;

		for (i = 0, sum = 0; i < n; i++)
		{
			sum += (std_ptr->grade[i]);
		}

		return (float) sum / n;
	}
}