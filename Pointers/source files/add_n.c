#include <stdio.h>

int add_n(int* iptr, int k)
{
	int ans;
	if (iptr == NULL)
	{
		return 0;
	}
	ans = *iptr + k;
	return ans;
}