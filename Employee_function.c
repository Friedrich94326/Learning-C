#include <stdio.h>
#include <stdlib.h>
#include "employee.h"


int LayersCount(Employee *worker, Employee staff[], int n)
{
	int i;
	static int count = 0; // initilisation of count

	if (worker->id == worker->boss_id)
	{
		return count;
	}

	for (i = 0; i < n; i++)
	{
		if ((worker->id) != (staff[i].id)) // do not compare to himself/ herself
		{
			if ((worker->boss_id) == (staff[i].id))
			{
				count++;
				worker = &staff[i];
			}
		}
	}
	
	return LayersCount(&worker, staff, n);
}